 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME binary-search)

 add_library(${TARGET_NAME}
         STATIC
         src/first-bad-version.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include)