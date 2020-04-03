cmake_minimum_required(VERSION 2.8)
project(algorithms CXX)
add_subdirectory(sliding-window)
add_executable(${PROJECT_NAME} main.cpp)
target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wextra -pedantic -Werror)
target_include_directories(${PROJECT_NAME} PUBLIC sliding-window/include)
target_link_libraries(${PROJECT_NAME} sliding-window)


