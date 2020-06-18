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
         sqrtx.cpp
         peak-index-in-a-mountain-array.cpp
         find-peak-element.cpp
         random-pick-with-weight.cpp
         search-insert-position.cpp
         find-minimum-in-rotated-sorted-array.cpp
         capacity-to-ship-packages-within-d-days.cpp
         search-a-2d-matrix.cpp
         split-array-largest-sum.cpp
         heaters.cpp
         number-of-matching-subsequences.cpp
         max-sum-of-rectangle-no-larger-than-k.cpp
         divide-chocolate.cpp
         the-k-weakest-rows-in-a-matrix.cpp
         search-in-rotated-sorted-array-ii.cpp
         guess-number-higher-or-lower.cpp
         intersection-of-two-arrays.cpp
         arranging-coins.cpp
         online-election.cpp
         h-index-ii.cpp minimum-number-of-days-to-make-m-bouquets.cpp sum-of-mutated-array-closest-to-target.cpp find-the-smallest-divisor-given-a-threshold.cpp koko-eating-bananas.cpp missing-element-in-sorted-array.cpp find-right-interval.cpp time-based-key-value-store.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         )