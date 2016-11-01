#include <LinkedList_Token.h>

LinkedList_Token::LinkedList_Token() {
    this->first = nullptr;
    this->last = nullptr;
    this->length = 0;
}

Token *LinkedList_Token::getFirst() {
    return this->first->getValue();
}

Token *LinkedList_Token::getLast() {
    return this->last->getValue();
}

LinkedListItem_Token *LinkedList_Token::getIterator (){
        return this->first;
};

int LinkedList_Token::getLength() {
    return this->length;
}

void LinkedList_Token::add(Token *value) {
    length++;

    LinkedListItem_Token *item = new LinkedListItem_Token(value);

    //init
    if(first == nullptr){
        this->first = item;
        this->last = item;
        return;
    }

    LinkedListItem_Token *cur = this->last;

    item->setPrev(this->last);
    this->last->setNext(item);
    this->last = item;
}