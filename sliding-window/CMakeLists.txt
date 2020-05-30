 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME sliding-window)

 add_library(${TARGET_NAME}
     STATIC
     src/find-anagrams.cpp
     src/permutations-in-string.cpp
     src/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit.cpp
     src/number-of-substrings-containing-all-three-characters.cpp
     src/count-number-of-nice-subarrays.cpp
     src/replace-the-substring-for-balanced-string.cpp
     src/max-consecutive-ones-III.cpp
     src/binary-subarrays-with-sum.cpp
     src/subarrays-with-K-different-integers.cpp
     src/fruit-into-baskets.cpp
     src/shortest-subarray-with-sum-at-least-K.cpp
     src/minimum-size-subarray-sum.cpp
     src/get-equal-substrings-within-budget.cpp
     src/longest-repeating-character-replacement.cpp
     src/sliding-window-maximum.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)
