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
    LinkedListItem_Token *_prev;
    LinkedListItem_Token *_next;
    Token *_value;
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

    ~LinkedListItem_Token();
};

#endif //COMPILER_LINKEDLISTITEM_TOKEN_H
