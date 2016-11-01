#include <Lexemtable.h>
#include <cstdio>

/**
 * calcualtes the length of an lexem
 *
 * @param lexem
 * @return
 */
int getLength(char *lexem) ;

Lexemtable::Lexemtable(int size) {
    this->size = size;
    this->lexeme = new char[size];
    this->currentSize = 0;
}


char *Lexemtable::get(int position) {
    // position muss kleiner als die derzeitige size sein
    if (position >= this->currentSize) {
        printf("Lexem at position %d doesn't exist in Lexemtable\n", position);
        throw;
    }

    char* result = (lexeme + position);

    return result;
}

int Lexemtable::add(char *lexem) {

    int length = getLength(lexem) +1;

    int position = this->currentSize;

    if((position + length) > this->size){
        //TODO extend array
        printf("lexemtable ist voll");
        throw;
    }

    int pos = 0;
    while (lexem[pos] != '\0') {
        this->lexeme[(position + pos)] = lexem[pos];
        pos++;
    }

    this->lexeme[(position + pos)] = '\0';

    this->currentSize += (length + 1);

    return position;
}



int Lexemtable::find(char *lexem) {
    // TODO speed up thorugh lookUp Table
    int length = getLength(lexem);

    int position = 0;
    int acceptedChars = 0;
    for (int i = 0; i < size; i += lexem[i] + 1) {

        if (lexem[position] != length) {
            continue;
        }

        for (int j = 0; j < length; j++) {
            if (lexem[j] != lexeme[position + j]) {

            }
        }


    }

    return -1;
}

Lexemtable::~Lexemtable() {
}

/**
 * calcualtes the length of an lexem
 *
 * @param lexem
 * @return
 */
int getLength(char *lexem) {
    int pos = 0;

    while (lexem[pos] != '\0') {
        pos++;
    }

    return pos;
}