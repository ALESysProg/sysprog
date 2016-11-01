//
// Created by Angelo on 26.10.2016.
//

#ifndef COMPILER_LINKEDLIST_TOKEN_H
#define COMPILER_LINKEDLIST_TOKEN_H

#include "LinkedListItem_Token.h"

/**
 * Token List
 */
class LinkedList_Token {
private:
    LinkedListItem_Token *_first;
    LinkedListItem_Token *_last;
    int _length = 0;
public:
    LinkedList_Token();

    /**
     *
     * @return
     */
    LinkedListItem_Token *getFirst();

    /**
     *
     * @return
     */
    LinkedListItem_Token *getLast();

    /**
     *
     * @return
     */
    int getLength();

    /**
     *
     * @param value
     */
    void add(Token *value);

    ~LinkedList_Token();
};

#endif //COMPILER_LINKEDLIST_TOKEN_H
