 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME dfs)

 add_library(${TARGET_NAME}
         STATIC
         src/num-islands.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)