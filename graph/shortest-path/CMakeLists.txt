 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME shortest-path)

 add_library(${TARGET_NAME}
         STATIC
         network-delay-time.cpp
         cheapest-flights-within-k-stops.cpp minimum-cost-to-make-at-least-one-valid-path-in-a-grid.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC)