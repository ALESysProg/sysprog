project(Automat)

include_directories(includes)

add_library(Automat src/Automat.cpp)
add_executable(runAutomatTest src/TestAutomat.cpp ../CompilerConfig.h.in)
target_link_libraries(runAutomatTest Automat)