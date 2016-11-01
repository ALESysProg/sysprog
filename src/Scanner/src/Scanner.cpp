
#include "../includes/Scanner.h"
#include "../../FileBuffer/includes/FileBuffer.h"
#include "../../Symboltable/includes/Token.h"
#include "../../Symboltable/includes/Symboltable.h"
#include "../../Automat/includes/Automat.h"

bool isWhitespace(char character) {
    switch(character) {
        case ' ':
        case '\n':
        case '\r':
        case '\t':
        case '\0':
            return true;
        default:
            return false;
    }
}


/**
 * Scans the given source file and fills symboltable
 *
 * @param file source file
 * @param symboltable the instance of symboltable
 */
Scanner::Scanner(char *file, Symboltable symboltable) {
    //Needs a FileBuffer and Automaton to determine types
    FileBuffer *buffer = new FileBuffer(file, 500, 2);
    Automat* automat = new Automat();

    char singleWordBuffer[256];
    int length = 0;
    char readChar;
    while (!buffer->isEnd()) {
        readChar = buffer->getChar();
        if(length > 0 && isWhitespace(readChar)) {
            char* lexem = new char[length+1];
            for(int i = 0; i < length+1; i++) {
                lexem[i] = singleWordBuffer[]
            }
        }
    }
}

/**
 * @return the next token
 */
Token *Scanner::nextToken() {

}

Scanner::~Scanner() {
}