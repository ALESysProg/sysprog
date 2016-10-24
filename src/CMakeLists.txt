cmake_minimum_required(VERSION 3.6)
project(Compiler)

# The version number.
set(Compiler_VERSION_MAJOR 0)
set(Compiler_VERSION_MINOR 1)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file(
        "${PROJECT_SOURCE_DIR}/CompilerConfig.h.in"
        "${PROJECT_BINARY_DIR}/CompilerConfig.h"
)

file(REMOVE "${PROJECT_BINARY_DIR}/Testfiles")
file(COPY "${PROJECT_SOURCE_DIR}/Testfiles"
        DESTINATION "${PROJECT_BINARY_DIR}")

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11") # flags

#add_definitions( -PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR} )

add_subdirectory(Automat)
add_subdirectory(FileBuffer)
add_subdirectory(Scanner)
add_subdirectory(Symboltable)