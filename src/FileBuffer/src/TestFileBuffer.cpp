#include "../includes/FileBuffer.h"

#include <Windows.h>
#include <vector>
#include "CompilerConfig.h"


vector<string> get_all_files_names_within_folder(string folder) {
    vector<string> names;
    string search_path = folder + "/*.*";
    WIN32_FIND_DATA fd;
    HANDLE hFind = ::FindFirstFile(search_path.c_str(), &fd);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            // read all (real) files in current folder
            // , delete '!' read other 2 default folder . and ..
            if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
                names.push_back(fd.cFileName);
            }
        } while (::FindNextFile(hFind, &fd));
        ::FindClose(hFind);
    }
    return names;
}

bool TEST_getChar() {
    // Define sample file
    string sampleFilePath = string(Compiler_PROJECT_BINARY_DIR) + string("/Testfiles/sample1.txt");

    // Create 2 buffers and empty them
    char *bufferOutputIntern = new char[10000];
    char *bufferOutputExtern = new char[10000];
    for (int i = 0; i < 10000; i++) {
        bufferOutputExtern[i] = '\0';
        bufferOutputIntern[i] = '\0';
    }

    // Load Buffer Intern
    FileBuffer bufferIntern = FileBuffer((char *) sampleFilePath.data());
    for (int count = 0; !bufferIntern.isEnd() && count < 10000; count++) {
        bufferOutputIntern[count] = bufferIntern.getChar();
    }

    // Load Buffer Extern
    ifstream bufferExtern = ifstream();
    bufferExtern.open(sampleFilePath);
    bufferExtern.read(bufferOutputExtern, 10000);
    bufferExtern.close();

    // Compare both buffers
    for (int i = 0; i < 10000; i++) {
        if (bufferOutputIntern[i] != bufferOutputExtern[i]) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[]) {

    printf("Test %d %s\n", 0, TEST_getChar() ? "success" : "FAIL");
    //   printf("Test %d %s\n", 1, TEST_ungetChar() ? "success" : "FAIL");
    //   printf("Test %d %s\n", 2, TEST_getungetChar() ? "success" : "FAIL");


    printf("All tests run.\n");
}
