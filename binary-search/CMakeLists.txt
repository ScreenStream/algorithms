 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME binary-search)

 add_library(${TARGET_NAME}
         STATIC
         first-bad-version.cpp
         is-subsequence.cpp
         find-first-and-last-position-of-element-in-sorted-array.cpp
         binary-search.cpp
         search-in-rotated-sorted-array.cpp
         find-smallest-letter-greater-than-target.cpp
         single-element-in-a-sorted-array.cpp
         find-k-closest-elements.cpp
         median-of-two-sorted-arrays.cpp
         "sqrt(x).cpp"
         find-peak-element.cpp
         random-pick-with-weight.cpp
         search-insert-position.cpp
         find-minimum-in-rotated-sorted-array.cpp
         capacity-to-ship-packages-within-d-days.cpp
         search-a-2d-matrix.cpp
         split-array-largest-sum.cpp
         heaters.cpp
         number-of-matching-subsequences.cpp max-sum-of-rectangle-no-larger-than-k.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         )