 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME hash-table)

 add_library(${TARGET_NAME}
         STATIC
         two-sum.cpp minimum-area-rectangle.cpp cinema-seat-allocation.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC)