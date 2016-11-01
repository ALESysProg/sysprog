//
// Created by Angelo on 26.10.2016.
//

#ifndef COMPILER_LINKEDLIST_TOKEN_H
#define COMPILER_LINKEDLIST_TOKEN_H

#include "LinkedListItem_Token.h"

class LinkedList_Token {
private:
    LinkedListItem_Token* _first;
    LinkedListItem_Token* _last;
    int _lexemPosition;
    int _length = 0;
public:
    LinkedList_Token(int lexemPosition);

    LinkedListItem_Token* getFirst();
    LinkedListItem_Token* getLast();
    int getLength();
    void add(Token* value);

    char* getIdentifier();

    ~LinkedList_Token();
};

#endif //COMPILER_LINKEDLIST_TOKEN_H
