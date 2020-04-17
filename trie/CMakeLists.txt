 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME trie)

 add_library(${TARGET_NAME}
         STATIC
         palindrome-pairs.cpp
         add-and-search-word-data-structure-design.cpp
         search-suggestions-system.cpp stream-of-characters.cpp
         implement-magic-dictionary.cpp vowel-spellchecker.cpp prefix-and-suffix-search.cpp implement-trie-prefix-tree.cpp camelcase-matching.cpp replace-words.cpp maximum-xor-of-two-numbers-in-an-array.cpp word-search-ii.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR})
