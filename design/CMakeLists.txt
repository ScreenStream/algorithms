 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME design)

 add_library(${TARGET_NAME}
         STATIC
         lru-cache.cpp
         min-stack.cpp implement-queue-using-stacks.cpp implement-stack-using-queues.cpp)

 target_include_directories(${TARGET_NAME} PUBLIC include)