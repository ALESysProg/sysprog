#include "../includes/LinkedListItem_Token.h"

LinkedListItem_Token::LinkedListItem_Token(Token *value, LinkedListEntry_SymtabEntry *prev,
                                           LinkedListEntry_SymtabEntry *next) {
    this->_value = value;
    this->_prev = prev;
    this->_next = next;
}

void LinkedListItem_Token::setPrev(LinkedListItem_Token *newPrev) {

}

LinkedListItem_Token LinkedListItem_Token::getPrev() {

    return nullptr;
}

void LinkedListItem_Token::setNext(LinkedListItem_Token *newNext) {

}

LinkedListItem_Token LinkedListItem_Token::getNext() {

    return nullptr;
}

Token *LinkedListItem_Token::getValue() {

    return nullptr;
}

LinkedListItem_Token::~LinkedListItem_Token() {

}