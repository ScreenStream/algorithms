 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME linked-list)

 add_library(${TARGET_NAME}
         STATIC
         reversing/reverse-linked-list.cpp
         intersection-of-two-linked-lists.cpp
         add-two-numbers.cpp
         odd-even-linked-list.cpp
         merge-two-sorted-lists.cpp
         merge-k-sorted-lists.cpp
         copy-list-with-random-pointer.cpp
         remove-nth-node-from-end-of-list.cpp
         partition-list.cpp
         reversing/reverse-linked-list-ii.cpp
         rotate-list.cpp
         reversing/swap-nodes-in-pairs.cpp
         reversing/reverse-nodes-in-k-group.cpp
         remove-duplicates-from-sorted-list.cpp
         remove-duplicates-from-sorted-list-ii.cpp
         remove-linked-list-elements.cpp
         palindrome-linked-list.cpp
         add-two-numbers-ii.cpp
         plus-one-linked-list.cpp
         split-linked-list-in-parts.cpp
         flatten-a-multilevel-doubly-linked-list.cpp
         linked-list-components.cpp
         insert-into-a-sorted-circular-linked-list.cpp
         remove-zero-sum-consecutive-nodes-from-linked-list.cpp
         convert-binary-search-tree-to-sorted-doubly-linked-list.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include
         ${CMAKE_SOURCE_DIR})