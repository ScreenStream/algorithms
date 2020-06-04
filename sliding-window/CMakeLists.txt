cmake_minimum_required(VERSION 2.8)
set(TARGET_NAME sliding-window)

add_library(${TARGET_NAME}
    STATIC
    find-all-anagrams-in-a-string.cpp
    longest-substring-without-repeating-characters.cpp
        permutation-in-string.cpp
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
    sliding-window-maximum.cpp
    minimum-window-substring.cpp
    longest-substring-with-at-most-two-distinct-characters.cpp
    substring-with-concatenation-of-all-words.cpp
    maximum-number-of-occurrences-of-a-substring.cpp
    check-if-a-string-contains-all-binary-codes-of-size-k.cpp
    longest-substring-with-at-most-k-distinct-characters.cpp
    max-consecutive-ones-ii.cpp
    longest-substring-without-2-contiguous-occurrences-of-letter.cpp
    longest-semi-alternating-substring.cpp
    minimum-swaps-needed-to-make-k-girls-sitting-together.cpp
    substrings-of-size-k-with-k-distinct-chars.cpp count-unique-characters-of-all-substrings-of-a-given-string.cpp)

target_include_directories(${TARGET_NAME} PUBLIC)
