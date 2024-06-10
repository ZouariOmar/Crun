# set the cmake min version (current - 3.29.3)
cmake_minimum_required(VERSION 3.29.3)

# set the project/app name
project(Crun)

# set the CMake engine version
set(CMAKE_CXX_STANDARD 17)

set(SOURCES ../project/src/main.c
            ../project/src/lib.c
            ../project/inc/inc.h)

# add the main.cpp file as a source
add_executable(${PROJECT_NAME} ${SOURCES})