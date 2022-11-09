cmake_minimum_required(VERSION 3.10)
project(AES VERSION 0.1)

include_directories(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/inc/${PROJECT_NAME})
set(EXECUABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)
include(ctest)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(libs)