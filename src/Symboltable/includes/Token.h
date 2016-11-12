//
// Created by Angelo on 26.10.2016.
//

#ifndef COMPILER_TOKEN_H
#define COMPILER_TOKEN_H

#include <TType.h>
class Symboltable;

/**
 *
 */
class Token {
private:
    Symboltable* parent;
    int line;
    int column;
    int lexemPos;
    TType type;
public:
    Token(Symboltable* parent, int lexemPos, int column, int line, TType type);

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
    char* getLexem();

    int getLexemPos();

    /**
     *
     * @return
     */
    TType getType();

    bool equals(Token* token);

    ~Token();
};

#endif //COMPILER_TOKEN_H
