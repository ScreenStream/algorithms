 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME segment-tree)

 add_library(${TARGET_NAME}
         STATIC
         src/range-sum-query-mutable.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)