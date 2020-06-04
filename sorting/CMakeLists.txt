 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME sorting)

 add_subdirectory(bucket)

 add_library(${TARGET_NAME}
         STATIC
         insertion-sort-list.cpp
         sort-list.cpp pancake-sorting.cpp
         count-of-smaller-numbers-after-self.cpp
         largest-number.cpp
         relative-sort-array.cpp
         sort-the-matrix-diagonally.cpp
         wiggle-sort.cpp
         wiggle-sort-ii.cpp
         queue-reconstruction-by-height.cpp
         two-city-scheduling.cpp
         merge/interval-list-intersections.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR}
         ${CMAKE_CURRENT_SOURCE_DIR})