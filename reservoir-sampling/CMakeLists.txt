 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME reservoir-sampling)

 add_library(${TARGET_NAME}
         STATIC
         src/linked-list-random-node.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)