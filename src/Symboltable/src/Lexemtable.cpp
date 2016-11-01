#include <Lexemtable.h>
#include <cstdio>

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

    // TODO n lexem sollte möglich sein ddirekt zu referenzieren ohne kopie zurückzugeben
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