cmake_minimum_required(VERSION 3.23)
project(CLearn2)

set(CMAKE_CXX_STANDARD 14)

add_executable(CLearn2 src/ch8/repdigit.c stack.h implementation.c src/main.c src/ch8/fib.c src/ch8/print_array.c)
