#include <stdio.h>
#include "Scanner/includes/Scanner.h"
#include "Symboltable/includes/Symboltable.h"


#define EXIT_SUCCESS 0
#define EXIT_FAILURE -1

/**
 * Usage: Compiler.exe <input file> <output file>
 *
 * @param argc Anzahl der Argumente
 * @param argv Argumente
 * @return 0 (zero) if successful, else -1 (negative one).
 */
int main(int argc, char *argv[]) {
    if (argc > 1 && argc < 4) {
        Symboltable *symboltable = new Symboltable();
        Scanner *scanner = new Scanner(argv[1], stab);
        Token *token;

        while (token = scanner->nextToken()) {
            printf("Row: %d Column: %d Type: ", token->
        }

        Scanner::scan(argv[1]);
        //TODO Parser::parse(...);
        return EXIT_SUCCESS;
    } else if (argc > 2) {
        printf("Too many arguments supplied.\n");
        return EXIT_FAILURE;
    } else {
        printf("One argument expected.\n");
        return EXIT_FAILURE;
    }


    if (argc < 1) return EXIT_FAILURE;
    Symtab *stab = new Symtab();
    Scanner *s = new Scanner(argv[1], stab);
    Token *t;
    while (t = s->nextToken()) {
//Token ausgeben
    }
    return EXIT_SUCCESS


}