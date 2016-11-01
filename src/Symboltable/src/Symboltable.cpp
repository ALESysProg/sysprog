#include <Symboltable.h>

Symboltable::Symboltable() {
    this->lexeme = new Lexemtable(1024);
    this->linkedListToken = new LinkedList_Token();
}

int Symboltable::getHashForLexem(char *lexem, int line, int column) {

}

Token *Symboltable::insert(char *lexem, int column, int line, TType type) {

    return nullptr;
}

LinkedList_Token *Symboltable::lookup(int hash) {

    return nullptr;
}

Symboltable::~Symboltable() {


}
