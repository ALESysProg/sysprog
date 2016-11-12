#include <Token.h>
#include <Symboltable.h>

/**
 *
 * @param lexemPos position of lexem //TODO may as char*
 * @param column
 * @param line
 * @param type TType of Token
 * @return
 */
Token::Token(Symboltable* parent, int lexemPos, int column, int line, TType type) {
    this->parent = parent;
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
char* Token::getLexem() {
    return parent->getLexem(this->lexemPos);
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


bool Token::equals(Token* token) {
    return (this->column == token->getColumn()) && (this->line == token->getLine()) && (this->lexemPos == token->getLexemPos()) && (this->type == token->getType());
}


Token::~Token() {

}