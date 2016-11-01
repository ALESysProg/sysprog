//
// Created by Angelo on 26.10.2016.
//

#ifndef COMPILER_LEXEMTABLE_H
#define COMPILER_LEXEMTABLE_H


class Lexemtable {
private:
    char* lexeme;
    int size;
    int firstFreeIndex = 0;

public:
    /**
     * @param size standard size of the lexem array
     */
    Lexemtable(int size = 1024);

    /**
     * @param position the position of the lexem to return
     * @return the lexem
     */
    char* get(int position);

    /**
     * @param lexem lexem to add. Must end with \0
     * @return the position
     */
    int add(char* lexem);

    /**
     * @param lexem lexem to find. Must end with \0
     * @return the position
     */
    int find(char* lexem);
};


#endif //COMPILER_LEXEMTABLE_H
