 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME maths)

 add_library(${TARGET_NAME}
         STATIC
         plus-one.cpp
         reverse-integer.cpp
         count-primes.cpp
         ugly-number.cpp
         add-binary.cpp
         gcd-lcm.cpp
         check-if-it-is-a-straight-line.cpp
         valid-perfect-square.cpp
         find-n-unique-integers-sum-up-to-zero.cpp
         valid-triangle-number.cpp
         count-numbers-with-unique-digits.cpp
         maximum-of-absolute-value-expression.cpp
         fizz-buzz.cpp palindrome-number.cpp
         integer-to-roman.cpp
         roman-to-integer.cpp
         power-of-three.cpp
         multiply-strings.cpp
         integer-to-english-words.cpp
         self-dividing-numbers.cpp powx-n.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)