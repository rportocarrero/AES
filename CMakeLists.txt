cmake_minimum_required(VERSION 3.10)
project(AES VERSION 0.1)

set(EXECUABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)
include(ctest)

add_subdirectory(src)
add_subdirectory(test)