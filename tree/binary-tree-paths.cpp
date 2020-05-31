#include "tree.h"

using namespace std;

/*
 * Given a binary tree, return all root-to-leaf paths.

Note: A leaf is a node with no children.

Example:

Input:

   1
 /   \
2     3
 \
  5

Output: ["1->2->5", "1->3"]

Explanation: All root-to-leaf paths are: 1->2->5, 1->3
 */

void helper(TreeNode* root, const string& temp, vector<string>& res)
{
    if(!root->left && !root->right) { /// If the node is a leaf, then we are done.
        res.push_back(temp + to_string(root->val));
        return;
    }

    if(root->left) {
        helper(root->left, temp + to_string(root->val) + "->", res);
    }

    if(root->right) {
        helper(root->right, temp + to_string(root->val) + "->", res);
    }
}

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> res;
    helper(root, "", res);
    return res;
}

