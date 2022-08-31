cmake_minimum_required(VERSION 3.23)
project(matrix)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(matrix
        .idea/.gitignore
        .idea/matrix.iml
        .idea/modules.xml
        .idea/workspace.xml
        two-d-array.cpp)

add_executable(sum-diagonal sum-diagonal.cpp)
add_executable(row-by-col row-by-col.cpp)