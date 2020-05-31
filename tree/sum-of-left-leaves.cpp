#include "tree.h"

/*
 * Find the sum of all left leaves in a given binary tree.
 */

/// Very cool method taking isLeft info from the parent!
int helper(TreeNode* root, bool isLeft)
{
    if(!root) {
        return 0;
    }

    if(!root->left && !root->right && isLeft) {
        return root->val;
    }

    return helper(root->left, true) + helper(root->right, false);
}

int sumOfLeftLeaves(TreeNode* root) {
    return helper(root, false);
}

int sumOfLeftLeaves1(TreeNode* root) {
    if(!root) {
        return 0;
    }

    int res = 0; /// A local variable inside a recursive method! We do not need to maintain a global integer variable in this recursive method
                 /// (like we mostly do in void returning recursive methods), since that needed integer variable will be maintained with the return value
                 /// of this integer returning recursive method.

    if(root->left && !root->left->left  && !root->left->right) {
        res += root->left->val;
    }

    res += sumOfLeftLeaves(root->left);
    res += sumOfLeftLeaves(root->right);

    return res;
}