 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME strings)

 add_library(${TARGET_NAME}
         STATIC
         src/longest-substring-without-repeating-characters.cpp
         src/reverse-string.cpp
         src/letter-combinations-of-a-phone-number.cpp
         src/backspace-string-compare.cpp
         src/remove-duplicate-letters.cpp
         src/first-unique-char-in-string.cpp
         src/valid-parenthesis-string.cpp
         src/most-common-word.cpp
         src/partition-labels.cpp
         src/longest-palindromic-substring.cpp
         src/isomorphic-strings.cpp
         src/reorganize-string.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)