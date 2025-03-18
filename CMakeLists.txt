cmake_minimum_required(VERSION 3.10)
project(TransportApp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_executable(my_program 
    src/main.cpp 
    src/Transport.cpp
)

target_include_directories(my_program PRIVATE src)
