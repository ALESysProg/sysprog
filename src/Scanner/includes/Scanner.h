/*
 * Scanner.h
 *
 *  Created on: Sep 26, 2012
 *      Author: knad0001
 */

#ifndef SCANNER_H_
#define SCANNER_H_


class Scanner {
public:
    /**
     * Scans the given source file and fills symboltable
     *
     * @param file source file
     * @param symboltable the instance of symboltable
     */
    Scanner(char* file, Symboltable symboltable);

    /**
     * @return the next token
     */
    Token* nextToken();

    ~Scanner();
};

#endif /* SCANNER_H_ */
