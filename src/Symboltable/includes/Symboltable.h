#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_

#include <Token.h>
#include <LinkedList_Token.h>
#include <Lexemtable.h>

/**
 *
 */
class Symboltable {
private:
    Lexemtable *lexeme;
    LinkedList_Token *linkedListToken;

public:
    static int getHashForLexem(char *lexem, int line, int column);

    /**
     *
     */
    Symboltable();

    /**
     * @param lexem
     * @param column
     * @param line
     * @param type
     * @return
     */
    Token *insert(char *lexem, int column, int line, TType type);

    /**
     * @param hash
     * @return
     */
    LinkedList_Token *lookup(int hash);

    ~Symboltable();
};

#endif /* SYMBOLTABLE_H_ */
