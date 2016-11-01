#include <TType.h>

char *TTypes::toString(TType type) {
    switch (type) {
        case TokenIdentifier:
            return (char *) "TokenIdentifier";
        case TokenIntegerValue:
            return (char *) "TokenIntegerValue";
        case TokenIf:
            return (char *) "TokenIf";
        case TokenWhile:
            return (char *) "TokenWhile";
        case TokenAddOperator:
            return (char *) "TokenAddOperator";
        case TokenSubOperator:
            return (char *) "TokenSubOperator";
        case TokenDivOperator:
            return (char *) "TokenDivOperator";
        case TokenMulOperator:
            return (char *) "TokenMulOperator";
        case TokenSmallerOperator:
            return (char *) "TokenSmallerOperator";
        case TokenGreaterOperator:
            return (char *) "TokenGreaterOperator";
        case TokenEqualsOperator:
            return (char *) "TokenEqualsOperator";
        case TokenAssign:
            return (char *) "TokenAssign";
        case TokenNot:
            return (char *) "TokenNot";
        case TokenAnd:
            return (char *) "TokenAnd";
        case TokenOr:
            return (char *) "TokenOr";
        case TokenSemicolon:
            return (char *) "TokenSemicolon";
        case TokenParanthesisOpen:
            return (char *) "TokenParanthesisOpen";
        case TokenParanthesisClose:
            return (char *) "TokenParanthesisClose";
        case TokenWavyParanthesisOpen:
            return (char *) "TokenWavyParanthesisOpen";
        case TokenWavyParanthesisClose:
            return (char *) "TokenWavyParanthesisClose";
        case TokenEdgyParanthesisOpen:
            return (char *) "TokenEdgyParanthesisOpen";
        case TokenEdgyParanthesisClose:
            return (char *) "TokenEdgyParanthesisClose";
        case TokenMisteryAssign:
            return (char *) "TokenMisteryAssign";
        case TokenError:
            return (char *) "TokenError";
        default:
            return (char *) "Undefined";
    }
}