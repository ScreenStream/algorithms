 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME two-heaps)

 add_library(${TARGET_NAME}
         STATIC
         find-median-from-data-stream.cpp
         sliding-window-median.cpp
         IPO.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)