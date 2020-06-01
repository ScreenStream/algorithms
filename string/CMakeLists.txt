 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME strings)

 add_library(${TARGET_NAME}
         STATIC
         reverse-string.cpp
         backspace-string-compare.cpp
         remove-duplicate-letters.cpp
         first-unique-character-in-a-string.cpp
         valid-parenthesis-string.cpp
         most-common-word.cpp
         partition-labels.cpp
         longest-palindromic-substring.cpp
         isomorphic-strings.cpp
         reorganize-string.cpp
         sort-characters-by-frequency.cpp
         verifying-an-alien-dictionary.cpp
         jewels-and-stones.cpp
         ransom-note.cpp
         add-strings.cpp
         remove-k-digits.cpp
         reorder-data-in-log-files.cpp
         number-of-steps-to-reduce-a-number-in-binary-representation-to-one.cpp
         zigzag-conversion.cpp
         string-to-integer.cpp
         longest-common-prefix.cpp
         KMP/implement-strstr.cpp
         unique-email-addresses.cpp
         group-shifted-strings.cpp
         compare-version-numbers.cpp
         KMP/repeated-substring-pattern.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_CURRENT_SOURCE_DIR})