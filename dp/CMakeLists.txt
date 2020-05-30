 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME dp)

 add_subdirectory(knapsack)

 add_library(${TARGET_NAME}
         STATIC
         src/fibonacci-number.cpp
         src/two-sum.cpp
         src/coin-change.cpp
         src/minimum-path-sum.cpp
         src/house-robber.cpp
         src/min-cost-climbing-stairs.cpp
         src/climbing-stairs.cpp
         src/unique-paths.cpp
         src/decode-ways.cpp
         src/minimum-falling-path-sum.cpp
         src/minimum-costs-for-tickets.cpp
         src/2-keys-keyboard.cpp
         src/perfect-squares.cpp
         src/triangle.cpp
         src/maximal-square.cpp
         src/longest-common-subsequence.cpp
         src/longest-palindromic-subsequence.cpp
         src/shortest-common-supersequence.cpp
         src/longest-increasing-path-in-matrix.cpp
         src/count-square-submatrices-with-all-ones.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include
         knapsack/include)