 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME tree)

 add_library(${TARGET_NAME}
         STATIC
         src/same-tree.cpp
         src/symmetric-tree.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)
