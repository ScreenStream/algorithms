 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME heap)

 add_library(${TARGET_NAME}
         STATIC
         src/top-k-frequent-elements.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)