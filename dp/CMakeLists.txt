 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME dp)

 add_library(${TARGET_NAME}
         STATIC
         src/fib.cpp
         src/two-sum.cpp
         src/coin-change.cpp
         src/minimum-path-sum.cpp
         src/house-robber.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)