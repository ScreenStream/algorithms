 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME knapsack)

 add_library(${TARGET_NAME}
         STATIC
         partition-equal-subset-sum.cpp
         ones-and-zeroes.cpp
         last-stone-weight-II.cpp 
         coin-change-2.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)