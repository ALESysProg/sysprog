//
// Created by Angelo on 26.10.2016.
//

#ifndef COMPILER_TTYPE_H
#define COMPILER_TTYPE_H

enum TType {
    TokenIdentifier,
    TokenIntegerValue,
    TokenIf,
    TokenWhile,
    TokenAddOperator,
    TokenSubOperator,
    TokenDivOperator,
    TokenMulOperator,
    TokenSmallerOperator,
    TokenGreaterOperator,
    TokenEqualsOperator,
    TokenAssign,
    TokenNot,
    TokenAnd,
    TokenOr,
    TokenSemicolon,
    TokenParanthesisOpen,
    TokenParanthesisClose,
    TokenWavyParanthesisOpen,
    TokenWavyParanthesisClose,
    TokenEdgyParanthesisOpen,
    TokenEdgyParanthesisClose,
    TokenMisteryAssign, //TODO give better name
    TokenError
};

class TTypes {
public:
    static char* toString(TType type);
};

#endif //COMPILER_TTYPE_H
