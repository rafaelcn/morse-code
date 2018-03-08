cmake_minimum_required(VERSION 2.8)
project("Morse encoder/decoder")

# Compile flags
set(CXX_FLAGS "-Wall -O3 -pedantic -std=c++14")

# Build directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(EXEC_NAME "morse")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CXX_FLAGS}")

set (SRC
  src/main.cpp
  src/morse.cpp
  src/morse.h)

add_executable(${EXEC_NAME} ${SRC})
