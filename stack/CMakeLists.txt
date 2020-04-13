 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME stack)

 add_library(${TARGET_NAME}
         STATIC
         src/valid-parentheses.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)
