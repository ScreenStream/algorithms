 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME backtracking)

 add_library(${TARGET_NAME}
         STATIC
         generate-parenthesis.cpp
         palindrome-partitioning.cpp
         subsets.cpp
         subsets-ii.cpp
         permutations.cpp
         permutations-ii.cpp
         combination-sum.cpp
         path-sum-ii.cpp
         letter-case-permutation.cpp
         maximum-score-words-formed-by-letters.cpp
         sudoku-solver.cpp
         letter-combinations-of-a-phone-number.cpp
         n-queens.cpp
         n-queens-ii.cpp
         knights-tour.cpp
         remove-invalid-parentheses.cpp
         24-game.cpp
         increasing-subsequences.cpp
         tiling-a-rectangle-with-the-fewest-squares.cpp
         maximum-length-of-a-concatenated-string-with-unique-characters.cpp
         unique-paths-iii.cpp
         restore-ip-addresses.cpp
         palindrome-permutation-ii.cpp
         combinations.cpp
         combination-sum-ii.cpp
         combination-sum-iii.cpp
         permutation-sequence.cpp confusing-number-ii.cpp expression-add-operators.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR}/string
         ${CMAKE_SOURCE_DIR})