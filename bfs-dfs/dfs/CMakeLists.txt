 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME dfs)

 add_library(${TARGET_NAME}
         STATIC
         num-islands.cpp
         word-search.cpp
         path-sum.cpp
         validate-binary-search-tree.cpp
         smallest-string-starting-from-leaf.cpp
         maximum-product-of-splitted-binary-tree.cpp
         pseudo-palindromic-paths-in-a-binary-tree.cpp
         surrounded-regions.cpp
         count-univalue-subtrees.cpp
         longest-univalue-path.cpp
         partition-to-k-equal-sum-subsets.cpp
         reconstruct-itinerary.cpp
         max-area-of-island.cpp
         minesweeper.cpp
         keys-and-rooms.cpp
         pacific-atlantic-water-flow.cpp
         evaluate-division.cpp
         find-eventual-safe-states.cpp
         most-stones-removed-with-same-row-or-column.cpp
         number-of-enclaves.cpp
         number-of-closed-islands.cpp
         time-needed-to-inform-all-employees.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include
         ${CMAKE_SOURCE_DIR})