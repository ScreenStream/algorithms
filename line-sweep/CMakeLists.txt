 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME line-sweep)

 add_library(${TARGET_NAME}
         STATIC
         src/perfect-rectangle.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)