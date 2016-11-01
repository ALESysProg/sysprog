//
// Created by Angelo on 26.10.2016.
//

#ifndef COMPILER_TOKEN_H
#define COMPILER_TOKEN_H

#include "TType.h"

class Token {
private:
    int line;
    int column;
    TType type;
public:
    Token(int column, int line, TType type);
    int getColumn();
    int getLine();
    TType getType();
    int getHash();

    ~Token();
};

#endif //COMPILER_TOKEN_H
