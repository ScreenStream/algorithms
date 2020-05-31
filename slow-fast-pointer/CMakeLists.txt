 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME slow-fast-pointer)

 add_library(${TARGET_NAME}
         STATIC
         middle-of-the-linked-list.cpp
         happy-number.cpp
         linked-list-cycle-II.cpp
         linked-list-cycle.cpp
         find-the-duplicate-number.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR})