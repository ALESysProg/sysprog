#include <Symboltable.h>

Symboltable::Symboltable(int lexemTableLength, int hashTableLength) {
    this->lexemTableLength = lexemTableLength;
    this->hashTableLength = hashTableLength;
    this->hashTableEntries = new bool[hashTableLength];

    this->lexeme = new Lexemtable(lexemTableLength);
    this->linkedLists_Token = new LinkedList_Token[hashTableLength];
}

unsigned long Symboltable::getHashForLexem(unsigned char *lexem) {
    unsigned long hash = 5381;
    int c;

    while (c = *lexem++) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash % this->hashTableLength;
}


char *Symboltable::insert(char *lexem, int column, int line, TType type) {
    // If already there
    if(lookup(lexem) != nullptr) {
        return nullptr;
    }

    unsigned long hash = getHashForLexem((unsigned char*)lexem);

    Token* token = new Token(this, lexeme->add(lexem), column, line, type);

    if(!hashTableEntries[hash]) {
        linkedLists_Token[hash] = LinkedList_Token();
    }

    linkedLists_Token[hash].add(token);
    hashTableEntries[hash] = true;


    return lexem;
}

Token *Symboltable::lookup(char* lexem) {
    unsigned long hash = getHashForLexem((unsigned char*)lexem);
    if(!hashTableEntries[hash]) {
        return nullptr;
    }

    LinkedList_Token* searchResultList = &linkedLists_Token[hash];
    LinkedListItem_Token* iterator = searchResultList->getIterator();
    Token* foundToken = nullptr;

    do {
        if(Lexemtable::charEquals(lexem, iterator->getValue()->getLexem())) {
            foundToken = iterator->getValue();
            break;
        }

        iterator = iterator->getNext();

    } while(iterator->hasNext());

    return foundToken;
}

char* Symboltable::getLexem(int pos) {
    return lexeme->get(pos);
}

Symboltable::~Symboltable() {


}
