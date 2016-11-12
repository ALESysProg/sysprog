#include <Symboltable.h>
#include <iostream>

//LexemTable Test
bool testLexemTableAddAndGet();

bool testLexemTableFind();

bool testToken();

bool testTType();

bool testLinkedListToken();

int fail = 0;
int sucess = 0;

void test(bool success);

bool testSymboltable();

int main(int argc, char **argv) {

    printf("\nTesting Symboltable\n-----------------------------------------\n\n");


    printf("TEST LexemTable \n\n");

    printf("\ttest LexemTableAddAndGet \n");
    test(testLexemTableAddAndGet());


    printf("\ttest testLexemTableFind \n");
    test(testLexemTableFind());

    printf("TEST Token \n\n");

    printf("\ttest testToken \n");
    test(testToken());

    printf("TEST TType \n\n");

    printf("\ttest testTType \n");
    test(testTType());

    printf("TEST LinkedListToken \n\n");

    printf("\ttest testLinkedListToken \n");
    test(testLinkedListToken());

    printf("TEST Symboltable \n\n");

    printf("\ttest testSymboltable \n");
    test(testSymboltable());


    printf("\nSuccess: %i Failed: %i All %i \n", sucess, fail, sucess + fail);

}

bool testSymboltable() {
    char *lexem0 = (char *) "test";
    char *lexem1 = (char *) "test2";
    char *lexem2 = (char *) "test55";
    char *lexem3 = (char *) "blablabla";
    char *lexem4 = (char *) "test";


    Symboltable *symboltable = new Symboltable();
    symboltable->
            insert(lexem0,
                   0, 0, TokenIdentifier);
    symboltable->
            insert(lexem1,
                   0, 1, TokenIdentifier);
    symboltable->
            insert(lexem2,
                   15, 0, TokenIdentifier);
    symboltable->
            insert(lexem3,
                   3, 17, TokenIdentifier);
    symboltable->
            insert(lexem4,
                   15, 17, TokenIdentifier);


    Token *token0 = symboltable->lookup(lexem0);
    Token *token1 = symboltable->lookup(lexem1);
    Token *token2 = symboltable->lookup(lexem2);
    Token *token3 = symboltable->lookup(lexem3);
    Token *token4 = symboltable->lookup(lexem4);


    return Lexemtable::charEquals(lexem0, token0->getLexem())
           && Lexemtable::charEquals(lexem1, token1->getLexem())
           && Lexemtable::charEquals(lexem2, token2->getLexem())
           && Lexemtable::charEquals(lexem3, token3->getLexem())
           && Lexemtable::charEquals(lexem4, token4->getLexem());
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

    if (!Lexemtable::charEquals(lexem1, testLex)) {
        return false;
    }
    testLex = lex->get(position2);

    if (!Lexemtable::charEquals(lexem2, testLex)) {
        return false;
    }
    testLex = lex->get(position3);

    if (!Lexemtable::charEquals(lexem3, testLex)) {
        return false;
    }

    testLex = lex->get(position4);

    delete lex;

    return Lexemtable::charEquals(lexem4, testLex);

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

bool testToken() {
    Symboltable* symboltable = new Symboltable();
    Token *token = new Token(symboltable, 1, 2, 3, TokenAnd);

    if (token->getLine() != 3) {
        return false;
    }

    if (token->getColumn() != 2) {
        return false;
    }

    if (token->getLexemPos() != 1) {
        return false;
    }

    if (token->getType() != TokenAnd) {
        return false;
    }

    delete token;

    return true;

}

bool testLinkedListToken() {
    Symboltable *symboltable = new Symboltable();
    LinkedList_Token *list = new LinkedList_Token();

    Token *t1 = new Token(symboltable, 1, 2, 3, TokenAnd);
    Token *t2 = new Token(symboltable, 2, 3, 4, TokenAddOperator);
    Token *t3 = new Token(symboltable, 5, 6, 7, TokenEdgyParanthesisClose);

    list->add(t1);
    list->add(t2);
    list->add(t3);

    LinkedListItem_Token *item1 = list->getIterator();

    return (item1->getValue()->equals(t1)) && item1->getNext()->getValue()->equals(t2) && list->getLast()->equals(t3) &&
           (list->getLength() == 3);

}

bool testTType() {

    char *test = (char *) "TokenError";

    return Lexemtable::charEquals(test, TTypes::toString(TokenError));
}