 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME bfs)

 add_library(${TARGET_NAME}
         STATIC
         src/oranges-rotting.cpp
         src/island-perimeter.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)