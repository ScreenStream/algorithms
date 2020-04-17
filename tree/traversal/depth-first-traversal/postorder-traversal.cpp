#include "depth-first-traversal.h"

#include <algorithm> /// for std::reverse.



/*
 * Given a binary tree, return the postorder traversal of its nodes' values.

Example:

Input: [1,null,2,3]
   1
    \
     2
    /
   3

Output: [3,2,1]
Follow up: Recursive solution is trivial, could you do it iteratively?
 */

void postorderTraversalRecursiveHelper(TreeNode* root, vector<int>& res)
{
    if(!root) {
        return;
    }

    postorderTraversalRecursiveHelper(root->left, res);
    postorderTraversalRecursiveHelper(root->right, res);
    res.push_back(root->val);
}

vector<int> postorderTraversalRecursive(TreeNode* root)
{
    vector<int> res;
    postorderTraversalRecursiveHelper(root, res);
    return res;
}

vector<int> postorderTraversalIterative(TreeNode* root)
{
    if(!root) {
        return {};
    }

    vector<int> res;

    stack<TreeNode*> nodes;
    nodes.push(root);

    while(!nodes.empty()) {
        root = nodes.top();
        nodes.pop();
        res.push_back(root->val);

        if(root->left)
            nodes.push(root->left);
        if(root->right)
            nodes.push(root->right);

    }

    reverse(res.begin(), res.end());

    return res;
}

/*
 * Note that code for preorder and postorder traversal is really similar.
 * In postorder, instead popping left pointers first we will pop right pointers first from
 * the stack. That would make preorder traversal modified such that traversal would be: Root->R->L.
 * However, what we want is L->R->Root. This implies that we have
 * to reverse the output to reach the final output.
 */

