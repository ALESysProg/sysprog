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
     * Scans the given source file
     *
     * @param file Source file
     * @return Token sequence
     */
    static void scan(char *file);
};

#endif /* SCANNER_H_ */
