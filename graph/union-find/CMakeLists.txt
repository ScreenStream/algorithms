 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME union-find)

 add_library(${TARGET_NAME}
         STATIC
         friend-circles.cpp
         redundant-connection.cpp
         most-stones-removed-with-same-row-or-column.cpp
         number-of-operations-to-make-network-connected.cpp
         satisfiability-of-equality-equations.cpp
         accounts-merge.cpp
         surrounded-regions.cpp
         couples-holding-hands.cpp
         longest-consecutive-sequence.cpp
         count-servers-that-communicate.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC)