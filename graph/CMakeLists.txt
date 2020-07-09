cmake_minimum_required(VERSION 2.8)
set(TARGET_NAME graph)

add_subdirectory(coloring)
add_subdirectory(topological-sort)
add_subdirectory(shortest-path)
add_subdirectory(union-find)
add_subdirectory(strongly-connected-components)

add_library(${TARGET_NAME}
        STATIC
        minimum-height-trees.cpp
        find-the-town-judge.cpp
        find-the-celebrity.cpp
        clone-graph.cpp
        graph-valid-tree.cpp reciprocal-edges.cpp)

target_include_directories(${TARGET_NAME}
        PUBLIC
        searching/bfs
        searching/dfs
        coloring/include
        shortest-path/include
        strongly-connected-components/include
        topological-sort/include
        union-find/include)

target_link_libraries(${TARGET_NAME}
        bfs
        dfs
        coloring
        topological-sort
        union-find
        shortest-path
        strongly-connected-components)