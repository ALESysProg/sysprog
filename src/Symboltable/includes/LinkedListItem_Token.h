//
// Created by Angelo on 26.10.2016.
//

#ifndef COMPILER_LINKEDLISTITEM_TOKEN_H
#define COMPILER_LINKEDLISTITEM_TOKEN_H

#include <Token.h>

/**
 *
 */
class LinkedListItem_Token {
private:
    LinkedListItem_Token *prev;
    LinkedListItem_Token *next;
    Token *value;
public:
    LinkedListItem_Token(Token *value);

    /**
     * nullable
     *
     * @param newPrev
     */
    void setPrev(LinkedListItem_Token *newPrev);

    /**
     * nullable
     *
     * @param newPrev
     */
    LinkedListItem_Token *getPrev();

    /**
     * nullable
     *
     * @param newNext
     */
    void setNext(LinkedListItem_Token *newNext);

    /**
     * nullable
     *
     * @param newNext
     */
    LinkedListItem_Token *getNext();

    /**
     *
     * @param value
     */
    Token *getValue();

    bool hasNext();

    ~LinkedListItem_Token();
};

#endif //COMPILER_LINKEDLISTITEM_TOKEN_H
