project(Scanner)

include_directories(includes)

add_library(Scanner src/Scanner.cpp)
add_executable(runScannerTest src/TestScanner.cpp ../CompilerConfig.h.in)
target_link_libraries(runScannerTest Scanner)