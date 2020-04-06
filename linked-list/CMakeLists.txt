 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME linked-list)

 add_library(${TARGET_NAME}
         STATIC
         src/reverse-list.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)