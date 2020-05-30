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
add_subdirectory(knapsack)

add_executable(${PROJECT_NAME} main.cpp)

target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wextra -pedantic -Werror)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        sliding-window/include
        greedy/include
        backtracking/include
        bitwise/include
        design/include
        dp/include
        graph
        heap/include
        interval/include
        line-sweep/include
        linked-list/include
        maths/include
        string/include
        segment-tree/include
        two-pointers/include
        array/include
        stack/include
        binary-search/include
        reservoir-sampling/include
        knapsack/include)

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
        knapsack)


