#include <Token.h>

Token::Token(int lexemPos, int column, int line, TType type) {
    this->lexemPos = lexemPos;
    this->type = type;
    this->line = line;
    this->column = column;
}

/**
 *
 * @return
 */
int Token::getColumn() {
    return this->column;
}

/**
 *
 * @return
 */
int Token::getLine() {
    return this->line;
}

/**
 *
 * @return
 */
int Token::getLexemPos() {
    return this->lexemPos;
}

/**
 *
 * @return
 */
TType Token::getType() {
    return this->type;
}

Token::~Token() {

}