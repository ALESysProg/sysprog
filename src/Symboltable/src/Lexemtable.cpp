//
// Created by Angelo on 26.10.2016.
//

#include "../includes/Lexemtable.h"

Lexemtable::Lexemtable(int size) {
    this->size = size;
    this->lexeme = new char[size];
}


char *Lexemtable::get(int position) {
    if (position >= this->size) {
        printf("Lexem at position %d doesn't exist in Lexemtable\n", position);
        throw;
    }

    // Get size from lexem array
    char size = lexeme[position];

    char *stringPart = new char[size];

    // copy lexem to new array
    for (int i = 0; i < size; i++) {
        stringPart[i] = lexeme[position + i + 1];
    }

    return stringPart;
}

int Lexemtable::add(char *lexem) {
    if(size+lexem)
}


int getLength(char* lexem) {
    int pos = 0;

    while(lexem[pos] != '\0'){
        pos++;
    }

    return pos;
}

int Lexemtable::find(char *lexem) {
    int length = getLength(lexem);

    int position = 0;
    int acceptedChars = 0;
    for(int i = 0; i < size; i += lexem[i] + 1) {

        if(lexem[position] != length) {
            continue;
        }

        for(int j = 0; j < length; j++) {
            if(lexem[j] != lexeme[position + j]) {
                
            }
        }


    }


    return -1;
}