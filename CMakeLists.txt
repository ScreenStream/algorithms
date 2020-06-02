cmake_minimum_required(VERSION 2.8)
project(algorithms CXX)

add_subdirectory(sliding-window)
add_subdirectory(greedy)
add_subdirectory(backtracking)
add_subdirectory(bitwise)
add_subdirectory(design)
add_subdirectory(dp)
add_subdirectory(graph)
add_subdirectory(heap)
add_subdirectory(interval)
add_subdirectory(line-sweep)
add_subdirectory(linked-list)
add_subdirectory(maths)
add_subdirectory(string)
add_subdirectory(segment-tree)
add_subdirectory(two-pointers)
add_subdirectory(array)
add_subdirectory(stack)
add_subdirectory(binary-search)
add_subdirectory(reservoir-sampling)
add_subdirectory(slow-fast-pointer)
add_subdirectory(tree)
add_subdirectory(bfs-dfs)
add_subdirectory(sorting)
add_subdirectory(misc)
add_subdirectory(trie)
add_subdirectory(bucket)
add_subdirectory(hash-table)

add_executable(${PROJECT_NAME} main.cpp)

target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wextra -pedantic -Werror)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        sliding-window
        greedy
        backtracking
        bitwise
        design
        dp
        graph
        heap
        interval
        line-sweep
        linked-list
        maths
        string
        segment-tree
        two-pointers
        array
        stack
        binary-search
        reservoir-sampling
        slow-fast-pointer
        tree
        bfs
        dfs
        sorting
        misc
        trie
        bucket
        hash-table
        bfs-dfs)

target_link_libraries(${PROJECT_NAME}
        sliding-window
        greedy
        backtracking
        bitwise
        design
        dp
        graph
        heap
        interval
        line-sweep
        linked-list
        maths
        strings
        segment-tree
        two-pointers
        array
        stack
        binary-search
        reservoir-sampling
        slow-fast-pointer
        tree
        bfs
        dfs
        sorting
        misc
        trie
        bucket
        hash-table
        bfs-dfs)


