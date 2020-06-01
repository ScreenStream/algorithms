 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME array)

 add_library(${TARGET_NAME}
         STATIC
         contiguous-array.cpp
         remove-duplicates-from-sorted-array.cpp
         product-of-array-except-self.cpp
         subarray-sum-equals-k.cpp
         maximum-sum-circular-subarray.cpp
         remove-element.cpp next-permutation.cpp
         matrix/count-servers-that-communicate.cpp
         matrix/rotate-image.cpp
         matrix/set-matrix-zeroes.cpp
         rectangle-overlap.cpp
         matrix/battleships-in-a-board.cpp
         matrix/largest-plus-sign.cpp
         minimum-domino-rotations-for-equal-row.cpp
         matrix/valid-sudoku.cpp
         max-chunks-to-make-sorted.cpp
         max-chunks-to-make-sorted-ii.cpp
         non-decreasing-array.cpp
         contains-duplicate.cpp
         contains-duplicate-ii.cpp
         matrix/game-of-life.cpp
         peak-index-in-a-mountain-array.cpp
         move-zeroes.cpp
         matrix/spiral-matrix.cpp
         matrix/spiral-matrix-ii.cpp
         matrix/search-a-2d-matrix-ii.cpp prison-cells-after-n-days.cpp find-all-numbers-disappeared-in-an-array.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_CURRENT_SOURCE_DIR})