 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME bucket)

 add_library(${TARGET_NAME}
         STATIC
         contains-duplicate-iii.cpp campus-bikes.cpp top-k-frequent-elements.cpp h-index.cpp maximum-gap.cpp sort-characters-by-frequency.cpp top-k-frequent-words.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)