#include <stdio.h>
#include "Scanner/includes/Scanner.h"

/**
 * Starts the compiler with the given arguments
 * @param argc Anzahl der Argumente
 * @param argv Argumente
 * @return
 */
int main(int argc, char *argv[]) {
    if (argc == 2) {
        Scanner::scan(argv[1]);
        //TODO Parser::parse(...);
        return 0;
    } else if (argc > 2) {
        printf("Too many arguments supplied.\n");
        return -1;
    } else {
        printf("One argument expected.\n");
        return -1;
    }

}