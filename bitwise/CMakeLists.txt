cmake_minimum_required(VERSION 2.8)
set(TARGET_NAME bitwise)

add_library(${TARGET_NAME}
        STATIC
        single-number.cpp
        bitwise-and-of-numbers-range.cpp
        complement-of-base-10-integer.cpp
        divide-two-integers.cpp
        sum-of-two-integers.cpp
        counting-bits.cpp
        number-of-1-bits.cpp
        missing-number.cpp
        reverse-bits.cpp
        repeated-dna-sequences.cpp
        single-number-iii.cpp
        single-number-ii.cpp
        maximum-product-of-word-lengths.cpp
        subsets.cpp
        sort-integers-by-the-number-of-1-bits.cpp
        number-of-steps-to-reduce-a-number-to-zero.cpp
        hamming-distance.cpp
        majority-element.cpp
        power-of-two.cpp
        power-of-four.cpp
        find-the-difference.cpp
        integer-replacement.cpp
        binary-watch.cpp
        convert-a-number-to-hexadecimal.cpp
        maximum-xor-of-two-numbers-in-an-array.cpp
        number-complement.cpp
        total-hamming-distance.cpp
        binary-number-with-alternating-bits.cpp
        prime-number-of-set-bits-in-binary-representation.cpp
        bitwise-ors-of-subarrays.cpp
        number-of-valid-words-for-each-puzzle.cpp
        maximum-length-of-a-concatenated-string-with-unique-characters.cpp
        convert-binary-number-in-a-linked-list-to-integer.cpp
        minimum-flips-to-make-a-or-b-equal-to-c.cpp
        count-triplets-that-can-form-two-arrays-of-equal-xor.cpp
        valid-sudoku.cpp
        partition-to-k-equal-sum-subsets.cpp k-th-symbol-in-grammar.cpp)

target_include_directories(${TARGET_NAME}
        PUBLIC
        ${CMAKE_SOURCE_DIR})