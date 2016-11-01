//
// Created by Angelo on 26.10.2016.
//

#ifndef COMPILER_LINKEDLISTITEM_TOKEN_H
#define COMPILER_LINKEDLISTITEM_TOKEN_H

#include "Token.h"
#include "LinkedList_Token.h"

class LinkedListItem_Token {
private:
    LinkedListItem_Token* _prev;
    LinkedListItem_Token* _next;
    Token* _value;
    LinkedList_Token* _parent;
public:
    LinkedListItem_Token(LinkedList_Token* parent, Token* value, LinkedListEntry_SymtabEntry* prev, LinkedListEntry_SymtabEntry* next);

    void setPrev(LinkedListItem_Token* newPrev);
    void setNext(LinkedListItem_Token* newNext);
    void setValue(Token* value);

    bool isLast();
    bool isFirst();

    ~LinkedListItem_Token();
};

#endif //COMPILER_LINKEDLISTITEM_TOKEN_H
