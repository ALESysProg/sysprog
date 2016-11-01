//
// Created by Angelo on 26.10.2016.
//

#ifndef COMPILER_LINKEDLIST_TOKEN_H
#define COMPILER_LINKEDLIST_TOKEN_H

#include <Token.h>
#include <LinkedListItem_Token.h>

/**
 * Token List
 */
class LinkedList_Token {
private:
    LinkedListItem_Token *first;
    LinkedListItem_Token *last;
    int length = 0;
public:
    LinkedList_Token();

    /**
     *
     * @return last item
     */
    Token *getFirst();

    /**
     *
     * @return first item
     */
    Token *getLast();

    /**
     *
     * Returns an Iterator // TODO make as Interface
     *
     * @return
     */
    LinkedListItem_Token *getIterator ();

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
