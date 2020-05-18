 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME knapsack)

 add_library(${TARGET_NAME}
         STATIC
         src/partition-equal-subset-sum.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)