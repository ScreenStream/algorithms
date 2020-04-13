 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME tree)

 add_library(${TARGET_NAME}
         STATIC
         src/same-tree.cpp
         src/symmetric-tree.cpp
         src/invert-binary-tree.cpp
         src/subtree-another-tree.cpp
         src/inorder-traversal.cpp
         src/validate-bst.cpp
         src/preorder-traversal.cpp
         src/postorder-traversal.cpp
         src/create-binary-tree.cpp
         src/diameter-of-binary-tree.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include
         ${CMAKE_SOURCE_DIR}/string/include)
