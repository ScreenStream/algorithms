 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME maths)

 add_library(${TARGET_NAME}
         STATIC
         src/plus-one.cpp
         src/rotate-image.cpp
         src/reverse-integer.cpp
         src/set-matrix-zeroes.cpp
         src/count-primes.cpp
         src/ugly-number.cpp
         src/add-binary.cpp
         src/gcd-lcm.cpp
         src/check-if-it-is-a-straight-line.cpp
         src/valid-perfect-square.cpp
         src/find-n-unique-integers-sum-up-to-zero.cpp
         src/valid-triangle-number.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)