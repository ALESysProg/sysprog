project(FileBuffer)

include_directories(includes)

add_library(FileBuffer src/FileBuffer.cpp)
add_executable(runFileBufferTest src/TestFileBuffer.cpp ../CompilerConfig.h.in)
target_link_libraries(runFileBufferTest FileBuffer)