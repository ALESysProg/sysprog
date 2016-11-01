#include <LinkedListItem_Token.h>

LinkedListItem_Token::LinkedListItem_Token(Token *value) {
    this->_prev = nullptr;
    this->_next = nullptr;
    this->_value = value;
}

void LinkedListItem_Token::setPrev(LinkedListItem_Token *newPrev) {

}

LinkedListItem_Token *LinkedListItem_Token::getPrev() {

    return nullptr;
}

void LinkedListItem_Token::setNext(LinkedListItem_Token *newNext) {

}

LinkedListItem_Token *LinkedListItem_Token::getNext() {

    return nullptr;
}

Token *LinkedListItem_Token::getValue() {

    return nullptr;
}

LinkedListItem_Token::~LinkedListItem_Token() {

}