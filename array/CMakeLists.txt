 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME array)

 add_library(${TARGET_NAME}
         STATIC
         src/find-first-and-last-position-of-element-in-sorted-array.cpp
         src/find-the-duplicate-number.cpp
         src/contiguous-array.cpp
         src/remove-duplicates-from-sorted-array.cpp
         src/daily-temperatures.cpp
         src/product-of-array-except-self.cpp
         src/search-in-rotated-sorted-array.cpp
         src/subarray-sum-equals-k.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)