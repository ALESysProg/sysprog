/*
 * Automat.h
 *
 *  Created on: Jul 5, 2012
 *      Author: knad0001
 */

#ifndef Automat_H_
#define Automat_H_

class FileBuffer;

class Automat {
private:
    FileBuffer* fileBuffer;
public:
    Automat(FileBuffer* fileBuffer);

    virtual ~Automat();
};

#endif /* Automat_H_ */
