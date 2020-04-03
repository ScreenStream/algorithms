 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME sliding-window)

 add_library(${TARGET_NAME}
     STATIC
     src/find-anagrams.cpp
     src/permutations-in-string.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)
