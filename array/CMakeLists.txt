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
         contains-duplicate.cpp
         contains-duplicate-ii.cpp
         matrix/game-of-life.cpp
         move-zeroes.cpp
         matrix/spiral-matrix.cpp
         matrix/spiral-matrix-ii.cpp
         matrix/search-a-2d-matrix-ii.cpp
         prison-cells-after-n-days.cpp
         find-all-numbers-disappeared-in-an-array.cpp
         matrix/number-of-submatrices-that-sum-to-target.cpp
         bulb-switcher-iii.cpp
         sort-colors.cpp
         max-consecutive-ones.cpp
         matrix/toeplitz-matrix.cpp
         matrix/reshape-the-matrix.cpp
         find-numbers-with-even-number-of-digits.cpp
         min-steps-to-make-piles-equal-height.cpp
         fair-indexes.cpp
         largest-m-aligned-subset.cpp
         matrix/best-meeting-point.cpp
         first-missing-positive.cpp
         find-all-duplicates-in-an-array.cpp
         shortest-unsorted-continuous-subarray.cpp
         matrix/construct-matrix.cpp
         n-repeated-element-in-size-2n-array.cpp
         matrix/image-overlap.cpp
         matrix/valid-tic-tac-toe-state.cpp
         matrix/diagonal-difference.cpp
         matrix/staircase.cpp
         mini-max-sum.cpp
         matrix/pascals-triangle.cpp
         matrix/pascals-triangle-ii.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_CURRENT_SOURCE_DIR})