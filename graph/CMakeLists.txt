 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME graph)

 add_library(${TARGET_NAME}
         STATIC
         src/course-schedule.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)