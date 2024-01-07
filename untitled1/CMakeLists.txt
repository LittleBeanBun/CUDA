cmake_minimum_required(VERSION 3.27)
project(untitled1 CUDA)

set(CMAKE_CUDA_STANDARD 17)

add_executable(untitled1 main.cu)

set_target_properties(untitled1 PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
