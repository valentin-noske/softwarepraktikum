cmake_minimum_required(VERSION 3.17)
project(task0)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_C_STANDARD 99)

FIND_PACKAGE( OpenMP REQUIRED)
if(OPENMP_FOUND)
    message("OPENMP FOUND")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()

add_executable(task0 main.cpp vector.cpp umap.cpp map.cpp random_generator.cpp)
