 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME array)

 add_library(${TARGET_NAME}
         STATIC
         contiguous-array.cpp
         remove-duplicates-from-sorted-array.cpp
         product-of-array-except-self.cpp
         subarray-sum-equals-k.cpp
         maximum-sum-circular-subarray.cpp
         remove-element.cpp next-permutation.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)