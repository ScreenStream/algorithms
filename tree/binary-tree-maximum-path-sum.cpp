#include "tree.h"

/*
 * Given a non-empty binary tree, find the maximum path sum.

For this problem, a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections.
 The path must contain at least one node and does not need to go through the root.
 */

int helper(TreeNode* root, int& res)
{
    /*
     * Each node actually has two roles when it comes to function "helper". When processing the final result "res", the node is treated
     * as the highest point of a path. When calculating its return value, it is only part of a path (left or right part), and this return
     * value will be used to calculate path sum of other paths with some other nodes(above the current one) as their highest point.
     */
    if(!root) {
        return 0;
    }

    int leftSum = max(0, helper(root->left, res)); /// If a branch yielded us a negative result, we just do not go to that branch, hence 0.
    int rightSum = max(0, helper(root->right, res)); /// If a branch yielded us a negative result, we just do not go to that branch, hence 0.

    res = max(res, leftSum + rightSum + root->val); /// res acts as if the current root is the final root,
                                                    /// so we use left + right + root->val.

    return max(leftSum, rightSum) + root->val; /// To the upper layer in the call stack (after return statement), we cannot choose both
                                              /// left and right branches, (that defies the definition of the path.)
                                              /// so we need to select the larger one, so we use max(left, right) + root->val to prune the lower branch.
}

int maxPathSum(TreeNode* root) {
    if(!root) {
        return 0;
    }

    int res = INT_MIN;
    helper(root, res);
    return res;
}