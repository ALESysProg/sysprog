#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_

#include <TType.h>
#include <Token.h>
#include <LinkedList_Token.h>
#include <Lexemtable.h>




/**
 *
 */
class Symboltable {
private:
    Lexemtable *lexeme;
    LinkedList_Token *linkedLists_Token;

    bool *hashTableEntries;
    int hashTableLength; // length of hashtable
    int lexemTableLength; //length of lexemtable
    unsigned long getHashForLexem(unsigned char *lexem);
public:

    //static int getHashForLexem(char *lexem, int line, int column);

    char* getLexem(int pos);

    /**
     *
     */
    Symboltable(int lexemTableLength = 1024, int hashTableLength = 10240);

    /**
     * @param lexem
     * @param column
     * @param line
     * @param type
     * @return
     */
    char *insert(char *lexem, int column, int line, TType type);

    /**
     * @param hash
     * @return
     */
    Token *lookup(char* lexem);

    ~Symboltable();
};

#endif /* SYMBOLTABLE_H_ */
