 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME bucket)

 add_library(${TARGET_NAME}
         STATIC
         contains-duplicate-iii.cpp campus-bikes.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)