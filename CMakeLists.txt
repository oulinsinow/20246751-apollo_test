cmake_minimum_required(VERSION 3.10)
project(app)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)
set(SRC 
    src/main.cpp 
    src/Solution.cpp
)
add_executable(app ${SRC})
