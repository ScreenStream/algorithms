 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME two-pointers)

 add_library(${TARGET_NAME}
         STATIC
         container-with-most-water.cpp
         intersection-of-two-arrays-ii.cpp
         three-sum.cpp
         valid-palindrome.cpp
         duplicate-zeroes.cpp
         squares-of-a-sorted-array.cpp
         3Sum-closest.cpp
         subarray-product-less-than-K.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)