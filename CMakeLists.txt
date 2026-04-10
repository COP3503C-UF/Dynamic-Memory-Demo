cmake_minimum_required(VERSION 4.1)
project(dynamic_memory_demo)

set(CMAKE_CXX_STANDARD 20)

add_executable(dynamic_memory_demo
        Car.h
        file.cpp
        CarFactory.h)
