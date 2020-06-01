 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME sorting)

 add_library(${TARGET_NAME}
         STATIC
         insertion-sort-list.cpp
         sort-list.cpp pancake-sorting.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR})