#include <Lexemtable.h>
#include <cstdio>

/**
 * calcualtes the length of an lexem
 *
 * @param lexem
 * @return
 */

Lexemtable::Lexemtable(int size) {
    this->size = size;
    this->lexeme = new char[size];
    this->positions = new int[size/2];
    this->positionLength = 0;
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

    // speichert alle posistions um einfacher nach vorhandenen chars zu suchen
    this->positions[positionLength] = position;
    this->positionLength++;

    return position;
}

int Lexemtable::find(char *lexem) {

    int a = 0;

    while(a < this->positionLength){

        int pos = this->positions[a];

        // lexeme + pos ergibt das Wort
        if(charEquals((lexeme + pos), lexem)) {
            return pos;
        }

        a++;
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
int Lexemtable::getLength(char *lexem) {
    int pos = 0;

    while (lexem[pos] != '\0') {
        pos++;
    }

    return pos;
}

bool Lexemtable::charEquals(char *c1, char *c2) {

    int pos = 0;

    while(c1[pos] != '\0'){

        if(c1[pos] != c2[pos]){
            return false;
        }

        pos++;
    }

    return true;
}