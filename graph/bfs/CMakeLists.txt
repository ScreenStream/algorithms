 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME bfs)

 add_library(${TARGET_NAME}
         STATIC
         src/rotting-oranges.cpp
         src/island-perimeter.cpp
         src/word-ladder.cpp
         src/01-matrix.cpp
         src/as-far-from-land-as-possible.cpp
         src/shortest-path-in-binary-matrix.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)