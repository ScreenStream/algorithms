 cmake_minimum_required(VERSION 2.8)
 set(TARGET_NAME tree)

 add_subdirectory(traversal)

 add_library(${TARGET_NAME}
         STATIC
         same-tree.cpp
         symmetric-tree.cpp
         invert-binary-tree.cpp
         subtree-of-another-tree.cpp
         create-binary-tree.cpp
         diameter-of-binary-tree.cpp
         lowest-common-ancestor-of-bst.cpp
         lowest-common-ancestor-of-binary-tree.cpp
         all-nodes-distance-k-in-binary-tree.cpp
         binary-tree-maximum-path-sum.cpp
         binary-tree-paths.cpp
         check-if-a-string-is-a-valid-sequence-from-root-to-leaves-path-in-a-binary-tree.cpp
         deepest-leaves-sum.cpp
         sum-of-left-leaves.cpp
         path-sum-iii.cpp
         binary-tree-right-side-view.cpp
         range-sum-of-bst.cpp
         maximum-depth-of-n-ary-tree.cpp
         check-completeness-of-a-binary-tree.cpp
         convert-sorted-array-to-binary-search-tree.cpp
         delete-nodes-and-return-forest.cpp
         serialize-and-deserialize-binary-tree.cpp
         count-visible-nodes-in-binary-tree.cpp
         kth-smallest-element-in-a-bst.cpp
         binary-tree-tilt.cpp
         flatten-binary-tree-to-linked-list.cpp
         binary-search-tree-iterator.cpp
         recover-binary-search-tree.cpp
         sum-root-to-leaf-numbers.cpp
         traversal/vertical-order-traversal-of-a-binary-tree.cpp
         two-sum-iv-input-is-a-bst.cpp
         distribute-coins-in-binary-tree.cpp
         sum-of-distances-in-tree.cpp
         binary-tree-cameras.cpp
         remove-extra-edge.cpp
         path-sum-iv.cpp
         find-duplicate-subtrees.cpp
         maximum-depth-of-binary-tree.cpp
         merge-two-binary-trees.cpp
         count-complete-tree-nodes.cpp
         all-possible-full-binary-trees.cpp
         trim-a-binary-search-tree.cpp
         delete-node-in-a-bst.cpp
         insert-into-a-binary-search-tree.cpp balanced-binary-tree.cpp maximum-average-subtree.cpp)

 target_include_directories(${TARGET_NAME}
         PUBLIC
         ${CMAKE_SOURCE_DIR}/string
         ${CMAKE_SOURCE_DIR}
         ${CMAKE_CURRENT_SOURCE_DIR}
         traversal/breadth-first-traversal
         traversal/depth-first-traversal)

 target_link_libraries(${TARGET_NAME}
         breadth-first-traversal
         depth-first-traversal)
