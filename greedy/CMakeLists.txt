 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME greedy)

 add_library(${TARGET_NAME}
         STATIC
         src/min-cost-to-connect-ropes.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)