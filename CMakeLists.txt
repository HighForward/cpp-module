cmake_minimum_required(VERSION 2.8)

project(module_cpp)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")

file(GLOB module_cpp
        "CPP03/ex04/*.hpp"
        "CPP03/ex04/*.cpp"
        )

add_executable(module ${module_cpp} CPP03/ex03/NinjaTrap.cpp CPP03/ex03/NinjaTrap.hpp)