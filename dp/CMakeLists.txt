 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME dp)

 add_library(${TARGET_NAME}
         STATIC
         src/fib.cpp
         src/two-sum.cpp
         src/coin-change.cpp
         src/minimum-path-sum.cpp
         src/house-robber.cpp
         src/min-cost-climbing-stairs.cpp
         src/climbing-stairs.cpp
         src/unique-paths.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)