#include "tree.h"

using namespace std;

/*
 * You are given a binary tree in which each node contains an integer value.

Find the number of paths that sum to a given value.

THE PATH DOES NOT NEED TO START OR END AT THE ROOT OR A LEAF, but it must go downwards (traveling only from parent nodes to child nodes).

The tree has no more than 1,000 nodes and the values are in the range -1,000,000 to 1,000,000.
 */

int helper(TreeNode* root, int current, int target, unordered_map<int, int>& prefixSums)
{
    if(!root) {
        return 0;
    }

    current += root->val;
    int res = prefixSums[current - target];
    prefixSums[current]++;

    res += helper(root->left, current, target, prefixSums) + helper(root->right, current, target, prefixSums);
    prefixSums[current]--; /// restore the map, as the recursion goes from the bottom to the top (stack unwinds).
    return res;
}

/// Optimal solution with prefix sums. Time O(n), Space O(n).
int pathSum(TreeNode* root, int sum) {
    unordered_map<int, int> prefixSums;
    prefixSums[0] = 1;
    return helper(root, 0, sum, prefixSums);
}


/////////////////////////////////////////////////////////////////////


/// Selects a node as root, and searches its descendant to get a solution satisfying the requirement. pre is the accumulated sum above the current node.
int partialPathSum(TreeNode* root, int pre, int& sum)
{
    if(!root) {
        return 0;
    }

    int current = root->val + pre;
    return (current == sum ? 1 : 0) + partialPathSum(root->left, current, sum) + partialPathSum(root->right, current, sum);
}

/// Brute Force Way, Time Complexity: O(n^2)
/// Essentially, you start at root and find the number of root->anyNode solutions.
int pathSum1(TreeNode* root, int sum) {
    if(!root) {
        return 0;
    }

    return partialPathSum(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
}

