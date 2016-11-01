#include "../includes/LinkedList_Token.h"

LinkedList_Token::LinkedList_Token() {
    this->_first = nullptr;
    this->_last = nullptr;
    this->_length = 0;
}

LinkedListItem_Token *LinkedList_Token::getFirst() {
    return this->_first;
}

LinkedListItem_Token *LinkedList_Token::getLast() {
    return this->_last;
}

int LinkedList_Token::getLength() {
    return this->_length;
}

void LinkedList_Token::add(Token *value) {

}

~LinkedList_Token::LinkedList_Token();