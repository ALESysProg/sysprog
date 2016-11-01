#include "../includes/LinkedList_Token.h"

LinkedList_Token::LinkedList_Token(int lexemPosition) {
    lexemPos = lexemPosition;
}

LinkedListItem_Token*LinkedList_Token:: getFirst(){
    return _first;
}

LinkedListItem_Token* LinkedList_Token::getLast(){
    return _last;
}

int LinkedList_Token::getLength(){
    return _length;
}

void LinkedList_Token::add(Token *value) {

}

char* LinkedList_Token::getIdentifier(){
    Symboltable.
}








~LinkedList_Token::LinkedList_Token();