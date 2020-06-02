 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME heap)

 add_subdirectory(two-heaps)

 add_library(${TARGET_NAME}
         STATIC
         top-k-frequent-elements.cpp
         last-stone-weight.cpp
         k-closest-points-to-origin.cpp
         top-k-frequent-words.cpp
         find-K-pairs-with-smallest-sums.cpp
         kth-largest-element-in-an-array.cpp
         kth-largest-element-in-a-stream.cpp
         kth-smallest-element-in-a-sorted-matrix.cpp
         task-scheduler.cpp
         distant-barcodes.cpp
         smallest-range-covering-elements-from-k-lists.cpp partition-array-into-n-subsets-with-balanced-sum.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)