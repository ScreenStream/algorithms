#include "tree.h"

/*
 * Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]
 */

std::vector<std::vector<int>> levelOrder(TreeNode* root) {
    if(!root) {
        return {};
    }

    std::queue<TreeNode*> nodes;
    nodes.push(root);

    std::vector<std::vector<int>> res;

    while(!nodes.empty()) {
        int size = nodes.size();
        std::vector<int> vec;
        for(int i = 0; i < size; ++i) {
            auto node = nodes.front();
            nodes.pop();
            vec.push_back(node->val);

            if(node->left) {
                nodes.push(node->left);
            }

            if(node->right) {
                nodes.push(node->right);
            }
        }

        res.push_back(vec);
    }

    return res;
}