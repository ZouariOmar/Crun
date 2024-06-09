# set the cmake min version (current - 3.29.3)
cmake_minimum_required(VERSION 3.29.3)

# set the project/app name
project(Crun)

# set the CMake engine version
set(CMAKE_CXX_STANDARD 17)

# add the main.cpp file as a source
add_executable(${PROJECT_NAME} ../project/src/main.c)