 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME array)

 add_library(${TARGET_NAME}
         STATIC
         src/contiguous-array.cpp
         src/remove-duplicates-from-sorted-array.cpp
         src/product-of-array-except-self.cpp
         src/subarray-sum-equals-k.cpp
         src/maximum-sum-circular-subarray.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)