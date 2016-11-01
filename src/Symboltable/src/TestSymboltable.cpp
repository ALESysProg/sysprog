#include <Symboltable.h>
#include <Token.h>
#include <TType.h>
#include <LinkedList_Token.h>
#include <LinkedListItem_Token.h>
#include <Lexemtable.h>
#include <cstdio>

//LexemTable Test
bool testLexemTableAddAndGet();
bool testLexemTableFind() ;

//HildsMethoden
bool charEquals(char *c1, char *c2) ;

bool testToken();

bool testTType();

int main(int argc, char **argv) {

    printf("\nTesting Symboltable\n-----------------------------------------\n\n");

    int fail = 0;
    int sucess = 0;

    printf("TEST LexemTable \n\n");

    printf("\ttest LexemTableAddAndGet \n");
    if (testLexemTableAddAndGet()) {
        printf("\t\tSUCCESS\n\n");
        sucess++;
    } else {
        printf("\t\tFAILED\n\n");
        fail++;
    }


    printf("\ttest testLexemTableFind \n");
    if (testLexemTableFind()) {
        printf("\t\tSUCCESS\n\n");
        sucess++;
    } else {
        printf("\t\tFAILED\n\n");
        fail++;
    }

    printf("TEST Token \n\n");

    printf("\ttest testToken \n");
    if (testToken()) {
        printf("\t\tSUCCESS\n\n");
        sucess++;
    } else {
        printf("\t\tFAILED\n\n");
        fail++;
    }

    printf("TEST TType \n\n");

    printf("\ttest testTType \n");
    if (testTType()) {
        printf("\t\tSUCCESS\n\n");
        sucess++;
    } else {
        printf("\t\tFAILED\n\n");
        fail++;
    }



    LinkedList_Token *list = new LinkedList_Token();

    Symboltable *symboltable;

    symboltable = new Symboltable();

    printf("\nSuccess: %i Failed: %i All %i \n", sucess, fail, sucess + fail);

}


bool testLexemTableAddAndGet() {

    Lexemtable *lex = new Lexemtable(200);

    char *lexem1 = (char *) "lexem";
    char *lexem2 = (char *) "zweites";
    char *lexem3 = (char *) "blubbb";
    char *lexem4 = (char *) "adadadadadadadadadadadadadadadad";

    int position1 = lex->add(lexem1);
    int position2 = lex->add(lexem2);
    int position3 = lex->add(lexem3);
    int position4 = lex->add(lexem4);


    char *testLex = lex->get(position1);

    if (!charEquals(lexem1, testLex)) {
        return false;
    }
    testLex = lex->get(position2);

    if (!charEquals(lexem2, testLex)) {
        return false;
    }
    testLex = lex->get(position3);

    if (!charEquals(lexem3, testLex)) {
        return false;
    }

    testLex = lex->get(position4);

    delete lex;

    return charEquals(lexem4, testLex);

}


bool testLexemTableFind() {

    Lexemtable *lex = new Lexemtable(200);

    char *lexem1 = (char *) "lexem";
    char *lexem2 = (char *) "zweites";
    char *lexem3 = (char *) "blubbb";
    char *lexem4 = (char *) "adadadadadadadadadadadadadadadad";

    lex->add(lexem1);
    int position2 = lex->add(lexem2);
    lex->add(lexem3);
    lex->add(lexem4);

    int position = lex->find(lexem2);

    delete lex;

    return position == position2;
}

bool testToken(){

    Token *token = new Token(1,2,3,TokenAnd);

    if(token->getLine() != 3){
        return false;
    }

    if(token->getColumn() != 2){
        return false;
    }

    if(token->getLexemPos() != 1){
        return false;
    }

    if(token->getType() != TokenAnd){
        return false;
    }

    delete token;

    return true;

}

bool testTType(){

    char *test = (char *) "TokenError";

    TTypes *tTypes = new TTypes();

    return charEquals(test, tTypes->toString(TokenError));
}


/** UTILS **/
bool charEquals(char *c1, char *c2) {

    int pos = 0;

    while(c1[pos] != '\0'){

        if(c1[pos] != c2[pos]){
            return false;
        }

        pos++;
    }

    return true;
}