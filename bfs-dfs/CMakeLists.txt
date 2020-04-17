cmake_minimum_required(VERSION 2.8)

add_subdirectory(bfs)
add_subdirectory(dfs)

set(TARGET_NAME bfs-dfs)

add_library(${TARGET_NAME}
        STATIC
        walls-and-gates.cpp
        flood-fill.cpp)

target_include_directories(${TARGET_NAME}
        PUBLIC)