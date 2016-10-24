#include "../includes/FileBuffer.h"


int FileBuffer::getFileLength(ifstream *fileStream) {
    int pos = (int) fileStream->tellg();
    fileStream->seekg(0, ios_base::end);
    int length = (int) fileStream->tellg();
    fileStream->seekg(pos, ios_base::beg);
    return length;
}

FileBuffer::FileBuffer(char *file, int size, int segments) {
    if (segments < 1) {
        printf("A buffer can't have less than 1 segment. Given segments: %d\n", segments);
        throw;
    }

    _bufferSize = size;
    _file = file;
    _segments = segments;

    _buffer = new char[size];
    for (int i = 0; i < _bufferSize; i++) {
        _buffer[i] = '\0';
    }

    _loadedSegments = new int[segments];
    for (int i = 0; i < segments; i++) {
        _loadedSegments[i] = -1;
    }

    //open the file to get file length, then close it again
    ifstream *fileStream = new ifstream();
    fileStream->open(_file);
    _fileLength = getFileLength(fileStream);
    fileStream->close();

    _fileSegmentLength = _bufferSize / _segments;
}

int FileBuffer::getSegmentNumber(int position) {
    return position / _fileSegmentLength;
}

void FileBuffer::loadSegment(int segment, int loadToPosition) {
    //printf("Loading segment %d to position %d\n", segment, loadToPosition);
    //char **actualPosition = (char **) (&_buffer + (_fileSegmentLength * loadToPosition));



    int fileSegmentStartPos = segment * _fileSegmentLength;
    char *innerBuffer = new char[_fileSegmentLength];

    ifstream *fileStream = new ifstream();
    fileStream->open(_file);
    fileStream->seekg(fileSegmentStartPos, ios::beg);
    fileStream->read(innerBuffer, _fileSegmentLength);
    int readChars = (int) fileStream->gcount();
    fileStream->close();

    int bufferIndexStart = _fileSegmentLength * loadToPosition;

    for (int i = 0; i < _fileSegmentLength && i < readChars; i++) {
        _buffer[bufferIndexStart + i] = innerBuffer[i];
    }

    _loadedSegments[loadToPosition] = segment;

    delete[] innerBuffer;
}

int FileBuffer::getBufferPosition(int position) {
    int segment = getSegmentNumber(position);

    int firstFreeSegment = -1;
    int lowestSegment = -1;
    int highestSegment = -1;

    for (int i = 0; i < _segments; i++) {
        // get first free segment
        if (_loadedSegments[i] == -1 && firstFreeSegment == -1) {
            firstFreeSegment = i;
        }

        // get lowest segment
        if (lowestSegment == -1 || _loadedSegments[i] < _loadedSegments[lowestSegment]) {
            lowestSegment = i;
        }

        // get highest segment
        if (highestSegment == -1 || _loadedSegments[i] > _loadedSegments[highestSegment]) {
            highestSegment = i;
        }

        // Segment already loaded, so just take it
        if (_loadedSegments[i] == segment) {
            return (i * _fileSegmentLength) + (position % _fileSegmentLength);
        }
    }

    //Segment not yet loaded:

    // take a free segment slot, if one is found
    if (firstFreeSegment != -1) {
        loadSegment(segment, firstFreeSegment);
        return (firstFreeSegment * _fileSegmentLength) + (position % _fileSegmentLength);
    }

    // overwrite the lowest segment slot, if segment number is higher than all loaded segments
    if (segment > _loadedSegments[highestSegment]) {
        loadSegment(segment, lowestSegment);
        return (lowestSegment * _fileSegmentLength) + (position % _fileSegmentLength);
    }

    // overwrite the highest segment slot, if segment number is lower than all loaded segments
    if (segment < _loadedSegments[lowestSegment]) {
        loadSegment(segment, highestSegment);
        return (highestSegment * _fileSegmentLength) + (position % _fileSegmentLength);
    }

    printf("Unexpected Error! No segment slot found to overwrite! This should never happen. Maybe zero or negative segment count?\n");
    return -1;
}

char FileBuffer::_getChar(int position) {
    if (position < 0 || position >= _fileLength) {
        printf("Can't get char at position %d\n", position);
        throw;
    }

    return _buffer[getBufferPosition(position)];
}

int FileBuffer::getPosition() {
    return _fileCurrentPos;
}

char FileBuffer::getChar() {
    return _getChar(_fileCurrentPos++);
}

char FileBuffer::ungetChar() {
    return _getChar(--_fileCurrentPos);
}

bool FileBuffer::isEnd() {
    bool end = _fileCurrentPos >= _fileLength;
    return end;
}

FileBuffer::~FileBuffer() {
    delete[] _buffer;
    delete[] _loadedSegments;
}