 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME breadth-first-traversal)

 add_library(${TARGET_NAME}
         STATIC
         binary-tree-level-order-traversal.cpp
         binary-tree-level-order-traversal-II.cpp
         binary-tree-zigzag-level-order-traversal.cpp n-ary-tree-level-order-traversal.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR})


