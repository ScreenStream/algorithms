 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME interval)

 add_library(${TARGET_NAME}
         STATIC
         merge-intervals.cpp
         interval-list-intersections.cpp
         insert-interval.cpp
         meeting-rooms-i.cpp
         meeting-rooms-ii.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)