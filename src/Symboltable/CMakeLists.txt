project(Symboltable)

include_directories(includes)

add_library(Symboltable src/Symboltable.cpp)
add_executable(runSymboltableTest src/TestSymboltable.cpp ../CompilerConfig.h.in)
target_link_libraries(runSymboltableTest Symboltable)