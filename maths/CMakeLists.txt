 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME maths)

 add_library(${TARGET_NAME}
         STATIC
         src/happy-number.cpp
         src/plus-one.cpp
         src/rotate-image.cpp
         src/reverse-integer.cpp
         src/set-matrix-zeroes.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)