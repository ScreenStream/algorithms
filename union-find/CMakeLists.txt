 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME union-find)

 add_library(${TARGET_NAME}
         STATIC
         src/friend-circles.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)