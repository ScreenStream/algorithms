#include "backtracking.h"
#include "nodes.h"

using namespace std;

/*
 * Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.

Note: A leaf is a node with no children.
 */

void helper(vector<int>& temp, vector<vector<int>>& res, TreeNode* root, int sum)
{
    if(!root) {
        return;
    }

    temp.push_back(root->val);

    if(!root->left && !root->right && root->val == sum) {
        res.push_back(temp);
        temp.pop_back(); /// It is important to clean up the last item on the temp vector here. Every push_back must have a corresponding pop_back.
                         /// If we would not have popped back the last item here, temp would not have been cleaned up in the case a valid temp found.
        return;
    }

    helper(temp, res, root->left, sum - root->val);
    helper(temp, res, root->right, sum - root->val);

    temp.pop_back();
}

vector<vector<int>> pathSumII(TreeNode* root, int sum) {
    if(!root) {
        return {};
    }

    vector<vector<int>> res;
    vector<int> temp;
    helper(temp, res, root, sum);
    return res;
}
