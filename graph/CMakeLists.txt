 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME graph)

 add_subdirectory(coloring)
 add_subdirectory(topological-sort)
 add_subdirectory(shortest-path)
 add_subdirectory(union-find)

 add_library(${TARGET_NAME}
         STATIC
         src/minimum-height-trees.cpp
         src/find-the-town-judge.cpp
         src/find-the-celebrity.cpp
         src/critical-connections.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)