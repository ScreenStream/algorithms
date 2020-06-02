#include "tree.h"



/*
 * Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
 */

TreeNode* helper(const vector<int>& nums, int low, int high)
{
    if(low > high) {
        return nullptr;
    }

    int mid = low + (high - low)/2;

    auto node = new TreeNode(nums[mid]);
    node->left = helper(nums, low, mid - 1);
    node->right = helper(nums, mid + 1, high);
    return node;
}

/*
 *  time is O(n).
The space is O(logn) since there are at most logn recursion stacks in the meantime.
 */
TreeNode* sortedArrayToBST(vector<int>& nums) {
    if(nums.empty()) {
        return nullptr;
    }

    return helper(nums, 0, nums.size() - 1);
}