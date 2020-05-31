 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME linked-list)

 add_library(${TARGET_NAME}
         STATIC
         reverse-list.cpp
         intersection-of-two-linked-lists.cpp
         add-two-numbers.cpp
         odd-even-linked-list.cpp
         merge-two-sorted-lists.cpp
         merge-k-sorted-lists.cpp copy-list-with-random-pointer.cpp remove-nth-node-from-end-of-list.cpp partition-list.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include
         ${CMAKE_SOURCE_DIR})