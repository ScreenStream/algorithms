 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME segment-tree)

 add_library(${TARGET_NAME}
         STATIC
         range-sum-query-mutable.cpp
         xor-queries-of-a-subarray.cpp
         largest-rectangle-in-histogram.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC)