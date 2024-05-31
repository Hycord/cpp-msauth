cmake_minimum_required(VERSION 3.28 FATAL_ERROR)

project(MSAuth)

set(SRC_FILES src/MSAuth.cpp)

include_directories(include)
add_subdirectory(lib)

add_library(${PROJECT_NAME} STATIC ${SRC_FILES})
target_link_libraries( ${PROJECT_NAME} PRIVATE  OpenSSL::SSL OpenSSL::Crypto)
target_include_directories(${PROJECT_NAME} PUBLIC include lib/httplib)

find_package(OpenSSL REQUIRED)

