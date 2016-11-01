//
// Created by Angelo on 26.10.2016.
//

#ifndef COMPILER_LEXEMTABLE_H
#define COMPILER_LEXEMTABLE_H

/**
 * saves all lexemes
 *
 * lexem\0lexem\0 .....
 *
 * There are pointer to the first chars of the lexem
 *
 */
class Lexemtable {
private:

    char *lexeme;

    int *positions;

    int positionLength;

    /**
     * the maximum size of the table
     */
    int size;

    /**
     * represents the current fill of the table
     */
    int currentSize;

    bool charEquals(char *c1, char *c2) ;

    int getLength(char *lexem);

public:
    /**
     * @param size standard size of the lexem array
     */
    Lexemtable(int size);

    /**
     * @param position the position of the lexem to return
     * @return the lexem
     */
    char *get(int position);

    /**
     * @param lexem lexem to add. Must end with \0
     * @return the position
     */
    int add(char *lexem);

    /**
     * @param lexem to find. Must end with \0. Returns the position of the lexem
     * @return the position
     */
    int find(char *lexem);

    ~Lexemtable();
};


#endif //COMPILER_LEXEMTABLE_H
