#include "../includes/TType.h"

static char *TTypes::toString(TType type) {
    switch (type) {
        case TokenIdentifier:
            return "Token";

        case TokenIntegerValue:
            return "Token";
        case TokenIf:
            return "Token";
        case TokenWhile:
            return "Token";
        case TokenAddOperator:
            return "Token";
        case TokenSubOperator:
            return "Token";
        case TokenDivOperator:
            return "Token";
        case TokenMulOperator:
            return "Token";
        case TokenSmallerOperator:
            return "Token";
        case TokenGreaterOperator:
            return "Token";
        case TokenEqualsOperator:
            return "Token";
        case TokenAssign:
            return "Token";
        case TokenNot:
            return "Token";
        case TokenAnd:
            return "Token";
        case TokenOr:
            return "Token";
        case TokenSemicolon:
            return "Token";
        case TokenParanthesisOpen:
            return "Token";
        case TokenParanthesisClose:
            return "Token";
        case TokenWavyParanthesisOpen:
            return "Token";
        case TokenWavyParanthesisClose:
            return "Token";
        case TokenEdgyParanthesisOpen:
            return "Token";
        case TokenEdgyParanthesisClose:
            return "Token";
        case TokenMisteryAssign:
            return "Token"; //TODO give better name
        case TokenError:
            return "Token";
        default:
            return "Unknown";
    }
}