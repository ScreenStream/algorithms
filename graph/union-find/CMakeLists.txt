 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME union-find)

 add_library(${TARGET_NAME}
         STATIC
         src/friend-circles.cpp
         src/redundant-connection.cpp
         src/most-stones-removed-with-same-row-or-column.cpp
         src/number-of-operations-to-make-network-connected.cpp
         src/satisfiability-of-equality-equations.cpp
         src/accounts-merge.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include)