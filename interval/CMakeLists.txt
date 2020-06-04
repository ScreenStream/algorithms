 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME interval)

 add_library(${TARGET_NAME}
         STATIC
         merge-intervals.cpp
         interval-list-intersections.cpp
         insert-interval.cpp
         meeting-rooms-i.cpp
         meeting-rooms-ii.cpp
         non-overlapping-intervals.cpp
         minimum-number-of-arrows-to-burst-balloons.cpp
         find-the-most-frequent-element-in-all-intervals.cpp
         car-pooling.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)