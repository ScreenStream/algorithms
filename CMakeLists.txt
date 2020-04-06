cmake_minimum_required(VERSION 2.8)
project(algorithms CXX)

add_subdirectory(sliding-window)
add_subdirectory(tree)
add_subdirectory(greedy)
add_subdirectory(bfs)
add_subdirectory(dfs)
add_subdirectory(backtracking)
add_subdirectory(bitwise)
add_subdirectory(design)
add_subdirectory(dp)
add_subdirectory(graph)
add_subdirectory(heap)

add_executable(${PROJECT_NAME} main.cpp)

target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wextra -pedantic -Werror)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        sliding-window/include
        tree/include
        greedy/include
        bfs/include
        dfs/include
        backtracking/include
        bitwise/include
        design/include
        dp/include
        graph/include
        heap/include)

target_link_libraries(${PROJECT_NAME}
        sliding-window
        tree
        greedy
        bfs
        dfs
        backtracking
        bitwise
        design
        dp
        graph
        heap)


