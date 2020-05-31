#include "bfs.h"

using namespace std;

/*
 * Given a binary tree, return the zigzag level order traversal of its nodes' values.
 * (ie, from left to right, then right to left for the next level and alternate between).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its zigzag level order traversal as:
[
  [3],
  [20,9],
  [15,7]
]
 */

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    if(!root) return {};
    vector<vector<int>> res;

    queue<TreeNode*> nodes;
    nodes.push(root);
    bool leftToRight{true};

    while(!nodes.empty()) {
        int size = nodes.size();
        vector<int> levelNodes(size);

        for(int i = 0; i < size; ++i) {
            TreeNode* node = nodes.front();
            nodes.pop();

            int j = leftToRight ? i : size - i - 1;
            levelNodes[j] = node->val;

            if(node->left)
                nodes.push(node->left);
            if(node->right)
                nodes.push(node->right);
        }

        leftToRight = !leftToRight;
        res.push_back(levelNodes);
    }

    return res;
}