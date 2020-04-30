 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME backtracking)

 add_library(${TARGET_NAME}
         STATIC
         src/generate-parenthesis.cpp
         src/palindrome-partitioning.cpp
         src/subsets.cpp
         src/subsets-ii.cpp
         src/permutations.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include
         ${CMAKE_SOURCE_DIR}/string/include)