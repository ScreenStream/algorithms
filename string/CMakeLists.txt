 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME strings)

 add_library(${TARGET_NAME}
         STATIC
         src/longest-substring-without-repeating-characters.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)