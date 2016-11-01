//
// Created by Angelo on 26.10.2016.
//

#ifndef COMPILER_TOKEN_H
#define COMPILER_TOKEN_H

#include <TType.h>

/**
 *
 */
class Token {
private:
    int line;
    int column;
    int lexemPos;
    TType type;
public:
    Token(int lexemPos, int column, int line, TType type);

    /**
     *
     * @return
     */
    int getColumn();

    /**
     *
     * @return
     */
    int getLine();

    /**
     *
     * @return
     */
    int getLexemPos();

    /**
     *
     * @return
     */
    TType getType();

    ~Token();
};

#endif //COMPILER_TOKEN_H
