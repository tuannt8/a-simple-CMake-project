cmake_minimum_required(VERSION 3.6)
project(lib_2)

set(CMAKE_CXX_STANDARD 14)

# Automatic find all source file
aux_source_directory(./ SRC)
include_directories(./)

add_library(lib_2 ${SRC})

# Link to library 1
link_directories(../sub_lib_1)
include_directories(../)
target_link_libraries(lib_2 lib_1)
