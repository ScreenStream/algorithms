 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME stack)

 add_subdirectory(monotone-stack)

 add_library(${TARGET_NAME}
         STATIC
         valid-parentheses.cpp
         score-of-parentheses.cpp
         evaluate-reverse-polish-notation.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR})
