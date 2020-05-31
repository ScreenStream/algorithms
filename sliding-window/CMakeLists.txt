cmake_minimum_required(VERSION 2.8)
set(TARGET_NAME sliding-window)

add_library(${TARGET_NAME}
    STATIC
    find-anagrams.cpp
    longest-substring-without-repeating-characters.cpp
    permutations-in-string.cpp
    longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit.cpp
    number-of-substrings-containing-all-three-characters.cpp
    count-number-of-nice-subarrays.cpp
    replace-the-substring-for-balanced-string.cpp
    max-consecutive-ones-III.cpp
    binary-subarrays-with-sum.cpp
    subarrays-with-K-different-integers.cpp
    fruit-into-baskets.cpp
    shortest-subarray-with-sum-at-least-K.cpp
    minimum-size-subarray-sum.cpp
    get-equal-substrings-within-budget.cpp
    longest-repeating-character-replacement.cpp
    sliding-window-maximum.cpp)

target_include_directories(${TARGET_NAME} PUBLIC)
