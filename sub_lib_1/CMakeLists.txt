cmake_minimum_required(VERSION 3.6)
project(lib_1)

set(CMAKE_CXX_STANDARD 14)

# Automatic find all source file
aux_source_directory(./ SRC)

include_directories(./)

add_library(lib_1 ${SRC})
