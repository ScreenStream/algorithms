#include "tree.h"

using namespace std;

/*
 * Given a binary tree where each path going from the root to any leaf form a valid sequence, check if a given string
 * is a valid sequence in such binary tree.

We get the given string from the concatenation of an array of integers arr and the concatenation of all values of the nodes
 along a path results in a sequence in the given binary tree.
 */

void helper(TreeNode* root, vector<int>& temp, vector<vector<int>>& all)
{
    if(!root->left && !root->right) {
        temp.push_back(root->val);
        all.push_back(temp);
        return;
    }


    if(root->left) {
        auto m = temp;
        m.push_back(root->val);
        helper(root->left, m, all);
    }
    if(root->right) {
        auto m = temp;
        m.push_back(root->val);
        helper(root->right, m, all);
    }
}

bool isValidSequence(TreeNode* root, const vector<int>& arr) {
    vector<vector<int>> all;
    vector<int> temp;
    helper(root, temp, all);

    for(auto& vec : all) {
        if(vec == arr) {
            return true;
        }
    }

    return false;
}