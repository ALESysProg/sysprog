#include "../includes/TType.h"

static char *TTypes::toString(TType type) {
    switch (type) {
        case TokenIdentifier:
            return "TokenIdentifier";
        case TokenIntegerValue:
            return "TokenIntegerValue";
        case TokenIf:
            return "TokenIf";
        case TokenWhile:
            return "TokenWhile";
        case TokenAddOperator:
            return "TokenAddOperator";
        case TokenSubOperator:
            return "TokenSubOperator";
        case TokenDivOperator:
            return "TokenDivOperator";
        case TokenMulOperator:
            return "TokenMulOperator";
        case TokenSmallerOperator:
            return "TokenSmallerOperator";
        case TokenGreaterOperator:
            return "TokenGreaterOperator";
        case TokenEqualsOperator:
            return "TokenEqualsOperator";
        case TokenAssign:
            return "TokenAssign";
        case TokenNot:
            return "TokenNot";
        case TokenAnd:
            return "TokenAnd";
        case TokenOr:
            return "TokenOr";
        case TokenSemicolon:
            return "TokenSemicolon";
        case TokenParanthesisOpen:
            return "TokenParanthesisOpen";
        case TokenParanthesisClose:
            return "TokenParanthesisClose";
        case TokenWavyParanthesisOpen:
            return "TokenWavyParanthesisOpen";
        case TokenWavyParanthesisClose:
            return "TokenWavyParanthesisClose";
        case TokenEdgyParanthesisOpen:
            return "TokenEdgyParanthesisOpen";
        case TokenEdgyParanthesisClose:
            return "TokenEdgyParanthesisClose";
        case TokenMisteryAssign:
            return "TokenMisteryAssign";
        case TokenError:
            return "TokenError";
        default:
            return "Undefined";
    }
}