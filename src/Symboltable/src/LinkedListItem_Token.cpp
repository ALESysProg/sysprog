#include <LinkedListItem_Token.h>

LinkedListItem_Token::LinkedListItem_Token(Token *value) {
    this->prev = nullptr;
    this->next = nullptr;
    this->value = value;
}

void LinkedListItem_Token::setPrev(LinkedListItem_Token *newPrev) {
    this->prev = newPrev;
}

LinkedListItem_Token *LinkedListItem_Token::getPrev() {
    return this->prev;
}

void LinkedListItem_Token::setNext(LinkedListItem_Token *newNext) {
    this->next = newNext;
}

LinkedListItem_Token *LinkedListItem_Token::getNext() {
    return this->next;
}

Token *LinkedListItem_Token::getValue() {
    return this->value;
}

bool LinkedListItem_Token::hasNext(){
    return this->next != nullptr;
}

LinkedListItem_Token::~LinkedListItem_Token() {
}