 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME monotone-stack)

 add_library(${TARGET_NAME}
         STATIC
         daily-temperatures.cpp
         online-stock-span.cpp
         next-greater-node-in-linked-list.cpp
         sum-of-subarray-minimums.cpp
         maximum-binary-tree.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR})
