 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME shortest-path)

 add_library(${TARGET_NAME}
         STATIC
         src/network-delay-time.cpp
         src/cheapest-flights-within-k-stops.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include)