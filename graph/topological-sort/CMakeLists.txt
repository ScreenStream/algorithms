 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME topological-sort)

 add_library(${TARGET_NAME}
         STATIC
         course-schedule.cpp
         course-schedule-ii.cpp
         alien-dictionary.cpp
         longest-increasing-path-in-matrix.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)