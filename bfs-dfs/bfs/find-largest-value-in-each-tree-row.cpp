#include "bfs.h"

/*
 * You need to find the largest value in each row of a binary tree.
 */

/// BFS Solution
vector<int> largestValues(TreeNode* root) {
    if(!root) {
        return {};
    }

    queue<TreeNode*> nodes;
    nodes.push(root);

    vector<int> res;

    while(!nodes.empty()) {
        int size = nodes.size();
        int level_max = INT_MIN;

        for(int i = 0; i < size; ++i) {
            auto node = nodes.front();
            nodes.pop();

            level_max = max(level_max, node->val);

            if(node->left) {
                nodes.push(node->left);
            }
            if(node->right) {
                nodes.push(node->right);
            }
        }

        res.push_back(level_max);
    }

    return res;
}

//////////////////////////////////

void helper(TreeNode* root, int level, vector<int>& res)
{
    if(!root) {
        return;
    }

    if(res.size() == level) {
        res.push_back(root->val);
    } else {
        res[level] = max(res[level], root->val);
    }

    helper(root->left, level + 1, res);
    helper(root->right, level + 1, res);
}

/// Genius DFS version
vector<int> largestValues1(TreeNode* root) {
    if(!root) {
        return {};
    }

    vector<int> res;
    helper(root, 0, res);
    return res;
}

