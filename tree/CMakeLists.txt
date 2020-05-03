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
         src/diameter-of-binary-tree.cpp
         src/lowest-common-ancestor-of-bst.cpp
         src/lowest-common-ancestor-of-binary-tree.cpp
         src/level-order-traversal.cpp
         src/all-nodes-distance-k-in-binary-tree.cpp
         src/binary-tree-maximum-path-sum.cpp
         src/binary-tree-paths.cpp
         src/check-if-a-string-is-a-valid-sequence-from-root-to-leaves-path-in-a-binary-tree.cpp
         src/path-sum.cpp
         src/deepest-leaves-sum.cpp
         src/sum-of-left-leaves.cpp
         src/path-sum-iii.cpp
         src/binary-tree-right-side-view.cpp
         src/range-sum-of-bst.cpp
         src/maximum-depth-of-n-ary-tree.cpp
         src/find-largest-value-in-each-tree-row.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         include
         ${CMAKE_SOURCE_DIR}/string/include)
