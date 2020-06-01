 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME depth-first-traversal)

 add_library(${TARGET_NAME}
         STATIC
         inorder-traversal.cpp
         preorder-traversal.cpp
         postorder-traversal.cpp
         construct-binary-tree-from-preorder-and-inorder-traversal.cpp
         construct-binary-search-tree-from-preorder-traversal.cpp
         minimum-distance-between-bst-nodes.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR})


