# set the cmake min version (current - 3.29.3)
cmake_minimum_required(VERSION 3.29.3)

# set the project/app name
project(Crun)

# set the CMake engine version
set(CMAKE_CXX_STANDARD 20)

set(SOURCES ../project/src/main.cpp
            ../project/src/lib.cpp
            ../project/inc/inc.hpp
            ../project/models/color.h
            ../project/models/patterns.hpp
)

# add the main.cpp file as a source
add_executable(${PROJECT_NAME} ${SOURCES})