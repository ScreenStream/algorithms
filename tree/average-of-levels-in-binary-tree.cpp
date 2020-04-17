#include "bfs-dfs/bfs/bfs.h"



/*
 * Given a non-empty binary tree, return the average value of the nodes on each level in the form of an array.
Example 1:
Input:
    3
   / \
  9  20
    /  \
   15   7
Output: [3, 14.5, 11]
Explanation:
The average value of nodes on level 0 is 3,  on level 1 is 14.5, and on level 2 is 11. Hence return [3, 14.5, 11].
Note:
The range of node's value is in the range of 32-bit signed integer.
 */

vector<double> averageOfLevels(TreeNode* root) {
    if(!root) return {};

    vector<double> res;

    queue<TreeNode*> nodes;
    nodes.push(root);

    while(!nodes.empty()) {
        int size = nodes.size();
        double levelSum = 0.0;
        int initialSize = size;

        while(size) {
            TreeNode* node = nodes.front();
            nodes.pop();
            --size;

            levelSum += node->val;

            if(node->left)
                nodes.push(node->left);
            if(node->right)
                nodes.push(node->right);
        }

        res.push_back(levelSum/initialSize);
    }

    return res;
}