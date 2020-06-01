 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME misc)

 add_library(${TARGET_NAME}
         STATIC
         dfa/valid-number.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_CURRENT_SOURCE_DIR})