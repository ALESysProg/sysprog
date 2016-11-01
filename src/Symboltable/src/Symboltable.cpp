/*
 * Symboltable.cpp
 *
 *  Created on: Sep 26, 2012
 *      Author: knad0001
 */

#include <Lexemtable.h>
#include "../includes/Symboltable.h"

Symboltable::Symboltable() {
    lexeme = new Lexemtable();

    // TODO Auto-generated constructor stub

}

static int Symboltable::getHashForLexem(char *lexem) {

}

Token Symboltable::insert(char *lexem, int column, int line, TType type) {
    lexeme.
}

LinkedList_Token Symboltable::lookup(int hash) {

}

Symboltable::~Symboltable() {
    // TODO Auto-generated destructor stub
}
