cmake_minimum_required(VERSION 3.27)
project(2_1_dim_and_index CUDA)

set(CMAKE_CUDA_STANDARD 17)

add_executable(2_1_dim_and_index main.cu
        src/print_index.cu)

set_target_properties(2_1_dim_and_index PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
