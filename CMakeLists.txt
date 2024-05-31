cmake_minimum_required(VERSION 3.28 FATAL_ERROR)

project(EXAMPLE)

set(SRC_FILES src/EXAMPLE.cpp)

include_directories(include)

add_library(${PROJECT_NAME} STATIC ${SRC_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC include)