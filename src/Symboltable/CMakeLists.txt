project(Symboltable)

include_directories(includes)

add_library(Symboltable src/Symboltable.cpp)
add_library(Lexemtable src/Lexemtable.cpp)
add_library(Token src/Token.cpp)
add_library(TType src/TType.cpp)
add_library(List src/LinkedList_Token.cpp)
add_library(ListItem src/LinkedListItem_Token.cpp)

add_executable(runSymboltableTest src/TestSymboltable.cpp ../CompilerConfig.h.in)

target_link_libraries(runSymboltableTest Symboltable Lexemtable List Token TType)