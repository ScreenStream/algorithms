 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME two-pointers)

 add_library(${TARGET_NAME}
         STATIC
         container-with-most-water.cpp
         intersection-of-two-arrays-ii.cpp
         3Sum.cpp
         valid-palindrome.cpp
         duplicate-zeroes.cpp
         squares-of-a-sorted-array.cpp
         3Sum-closest.cpp
         subarray-product-less-than-K.cpp
         4Sum.cpp
         valid-palindrome-ii.cpp
         intersection-of-two-arrays.cpp
         trapping-rain-water.cpp
         two-sum-ii-input-array-is-sorted.cpp
         long-pressed-name.cpp
         largest-k-such-that-both-k-and--k-exist-in-array.cpp
         optimal-utilization.cpp
         remove-duplicates-from-sorted-array-ii.cpp
         longest-mountain-in-array.cpp
         interval-list-intersections.cpp determine-if-word-is-typo-because-of-stuck-key.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)