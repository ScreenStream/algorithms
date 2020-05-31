 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME bfs)

 add_library(${TARGET_NAME}
         STATIC
         rotting-oranges.cpp
         island-perimeter.cpp
         word-ladder.cpp
         01-matrix.cpp
         as-far-from-land-as-possible.cpp
         shortest-path-in-binary-matrix.cpp
         binary-tree-level-order-traversal.cpp
         binary-tree-level-order-traversal-II.cpp
         binary-tree-zigzag-level-order-traversal.cpp average-of-levels-in-binary-tree.cpp minimum-depth-of-binary-tree.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include
         ${CMAKE_SOURCE_DIR})