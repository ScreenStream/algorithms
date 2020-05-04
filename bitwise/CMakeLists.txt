 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME bitwise)

 add_library(${TARGET_NAME}
         STATIC
         src/single-number.cpp
         src/bitwise-and-of-numbers-range.cpp
         src/complement-of-base-10-integer.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)