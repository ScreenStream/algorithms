 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME coloring)

 add_library(${TARGET_NAME}
         STATIC
         is-graph-bipartite.cpp
         possible-bipartition.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)