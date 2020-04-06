 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME interval)

 add_library(${TARGET_NAME}
         STATIC
         src/merge-intervals.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)