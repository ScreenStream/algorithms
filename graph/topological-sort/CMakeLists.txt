 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME topological-sort)

 add_library(${TARGET_NAME}
         STATIC
         src/course-schedule.cpp
         src/course-schedule-ii.cpp
         src/alien-dictionary.cpp
         src/longest-increasing-path-in-matrix.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)