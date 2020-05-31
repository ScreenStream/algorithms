 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME strongly-connected-components)

 add_library(${TARGET_NAME}
         STATIC
         critical-connections.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)