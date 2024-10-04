cmake_minimum_required(VERSION 3.29)

project(greeting)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(greeting src/main.cpp src/greeting.cpp)