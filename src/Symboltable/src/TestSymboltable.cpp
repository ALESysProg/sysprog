#include <Symboltable.h>
#include <Token.h>
#include <TType.h>
#include <LinkedList_Token.h>
#include <LinkedListItem_Token.h>
#include <Lexemtable.h>

int main(int argc, char **argv) {

    Token *t = new Token(0, 0, 0, TokenIf);

    Lexemtable *lex = new Lexemtable(200);

    LinkedList_Token *list = new LinkedList_Token();

    Symboltable *symboltable;

    symboltable = new Symboltable();

}
