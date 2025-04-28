# set the cmake min version (current - 3.29.3)
cmake_minimum_required(VERSION 3.29.3)

# set the project/app name
project(Crun)

# set the CMake engine version
set(CMAKE_CXX_STANDARD 20)

set(SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/../project/src/main.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/../project/src/Crun.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/../project/include/Crun.hpp
  ${CMAKE_CURRENT_SOURCE_DIR}/../project/import/color.h
  ${CMAKE_CURRENT_SOURCE_DIR}/../project/import/patterns.hpp
)

# add the main.cpp file as a source
add_executable(${PROJECT_NAME} ${SOURCES})
