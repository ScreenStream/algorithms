 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME array)

 add_library(${TARGET_NAME}
         STATIC
         contiguous-array.cpp
         remove-duplicates-from-sorted-array.cpp
         product-of-array-except-self.cpp
         subarray-sum-equals-k.cpp
         maximum-sum-circular-subarray.cpp
         remove-element.cpp next-permutation.cpp
         matrix/count-servers-that-communicate.cpp
         matrix/rotate-image.cpp
         matrix/set-matrix-zeroes.cpp
         rectangle-overlap.cpp matrix/battleships-in-a-board.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_CURRENT_SOURCE_DIR})