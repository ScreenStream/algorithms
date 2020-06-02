 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME hash-table)

 add_library(${TARGET_NAME}
         STATIC
         two-sum.cpp
         minimum-area-rectangle.cpp
         cinema-seat-allocation.cpp
         vowel-spellchecker.cpp
         time-based-key-value-store.cpp
         numbers-with-equal-digit-sum.cpp
         min-deletions-to-make-frequency-of-each-letter-unique.cpp
         largest-number-x-which-occurs-x-times.cpp
         favorite-genres.cpp
         strobogrammatic-number.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)