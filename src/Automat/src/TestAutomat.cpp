
#include "../includes/Automat.h"
#include "../../FileBuffer/includes/FileBuffer.h"


int fail = 0;
int sucess = 0;

void test(bool success);
bool testAutomat();

int main(int argc, char *argv[]) {

    printf("\nTesting Automat\n-----------------------------------------\n\n");


    printf("TEST Automat \n\n");
    test(testAutomat());


    printf("\nSuccess: %i Failed: %i All %i \n", sucess, fail, sucess + fail);

    FileBuffer* fileBuffer = new FileBuffer((char*) "Testfiles/sample1.txt", 500, 2);
    Automat *automat = new Automat(fileBuffer);
    //TODO
}


bool testAutomat() {
    return false;
}


void test(bool success) {
    if (success) {
        printf("\t\tSUCCESS\n\n");
        sucess++;
    } else {
        printf("\t\tFAILED\n\n");
        fail++;
    }
}