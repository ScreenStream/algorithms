 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME trie)

 add_library(${TARGET_NAME}
         STATIC
         palindrome-pairs.cpp
         add-and-search-word-data-structure-design.cpp
         search-suggestions-system.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR})
