 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME backtracking)

 add_library(${TARGET_NAME}
         STATIC
         src/generate-parenthesis.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)