cmake_minimum_required(VERSION 3.6)
project(template)

set(CMAKE_CXX_STANDARD 14)

# CMake will search for a CMakeLists.txt inside these folder
add_subdirectory(sub_lib_1)
add_subdirectory(sub_lib_2)

aux_source_directory(./ SRC)
add_executable(main ${SRC})
include_directories(./)
target_link_libraries(main lib_1 lib_2)
