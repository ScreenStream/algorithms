 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME bitwise)

 add_library(${TARGET_NAME}
         STATIC
         src/single-number.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)