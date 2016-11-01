#include "../includes/LinkedListItem_Token.h"

LinkedListItem_Token::LinkedListItem_Token(LinkedList_Token* parent, Token *value, LinkedListEntry_SymtabEntry *prev,
                                           LinkedListEntry_SymtabEntry *next) {
    _parent = parent;
    _value = value;
    _prev = prev;
    _next = next;
}