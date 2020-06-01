 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME dfs)

 add_library(${TARGET_NAME}
         STATIC
         num-islands.cpp
         word-search.cpp
         flood-fill.cpp
         path-sum.cpp
         validate-binary-search-tree.cpp
         smallest-string-starting-from-leaf.cpp
         maximum-product-of-splitted-binary-tree.cpp
         pseudo-palindromic-paths-in-a-binary-tree.cpp surrounded-regions.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include
         ${CMAKE_SOURCE_DIR})