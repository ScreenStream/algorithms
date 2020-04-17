 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME depth-first-traversal)

 add_library(${TARGET_NAME}
         STATIC
         inorder-traversal.cpp
         preorder-traversal.cpp
         postorder-traversal.cpp
         construct-binary-tree-from-preorder-and-inorder-traversal.cpp
         ../../bst/construct-binary-search-tree-from-preorder-traversal.cpp
         ../../bst/minimum-distance-between-bst-nodes.cpp
         n-ary-tree-preorder-traversal.cpp
         construct-binary-tree-from-inorder-and-postorder-traversal.cpp ../../bst/find-mode-in-binary-search-tree.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR})


