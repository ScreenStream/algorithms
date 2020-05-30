#include "tree.h"

/*
 * Given a binary tree, you need to compute the length of the diameter of the tree.
 * The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

Example:
Given a binary tree
          1
         / \
        2   3
       / \
      4   5
Return 3, which is the length of the path [4,2,1,3] or [5,2,1,3].

Note: The length of path between two nodes is represented by the number of edges between them.
 Note: Definition of diameter may vary. Pay attention to it.

 Another definition for diameter:

The diameter (or width) of a tree is the number of nodes on the longest path between any two leaf nodes.
 Which is not true for this question.
 */

int maxDepth(TreeNode* root, int& diameter)
{
    if(!root)
        return 0;

    int l = maxDepth(root->left, diameter);
    int r = maxDepth(root->right, diameter);

    diameter = std::max(diameter, l + r);

    return std::max(l, r) + 1;
}

int diameterOfBinaryTree(TreeNode* root) {
    int diameter = 0;
    maxDepth(root, diameter);
    return diameter;
}



