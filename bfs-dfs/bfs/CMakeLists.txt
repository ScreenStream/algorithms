 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME bfs)

 add_library(${TARGET_NAME}
         STATIC
         rotting-oranges.cpp
         word-ladder.cpp
         01-matrix.cpp
         as-far-from-land-as-possible.cpp
         shortest-path-in-binary-matrix.cpp
         minimum-depth-of-binary-tree.cpp
         find-largest-value-in-each-tree-row.cpp
         cousins-in-binary-tree.cpp
         minimum-knight-moves.cpp
         the-maze.cpp
         minimum-cost-to-make-at-least-one-valid-path-in-a-grid.cpp
         word-ladder-ii.cpp
         shortest-bridge.cpp
         shortest-path-in-a-grid-with-obstacles-elimination.cpp
         treasure-island.cpp
         employee-importance.cpp
         open-the-lock.cpp
         maximum-level-sum-of-a-binary-tree.cpp
         jump-game-iii.cpp
         populating-next-right-pointers-in-each-node-ii.cpp
         treasure-island-ii.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include
         ${CMAKE_SOURCE_DIR})