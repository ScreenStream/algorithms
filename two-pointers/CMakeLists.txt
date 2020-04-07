 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME two-pointers)

 add_library(${TARGET_NAME}
         STATIC
         src/container-with-most-water.cpp
         src/intersectionf-of-two-arrays-ii.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)