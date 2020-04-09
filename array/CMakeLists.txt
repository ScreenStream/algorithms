 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME array)

 add_library(${TARGET_NAME}
         STATIC
         src/find-first-and-last-position-of-element-in-sorted-array.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)