#pragma once

#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

#include "nodes.h"

TreeNode* createBinaryTree(const std::string& input);
bool isSameTree(TreeNode* p, TreeNode* q);
bool isSubtree(TreeNode* s, TreeNode* t);
bool isSymmetric(TreeNode* root);
TreeNode* invertTree(TreeNode* root);
bool isValidBSTIterative(TreeNode* root);
bool isValidBSTRecursive(TreeNode* root);
int diameterOfBinaryTree(TreeNode* root);
TreeNode* lowestCommonAncestorBST(TreeNode* root, TreeNode* p, TreeNode* q);
TreeNode* lowestCommonAncestorBinaryTree(TreeNode* root, TreeNode* p, TreeNode* q);
std::vector<int> distanceK(TreeNode* root, TreeNode* target, int K);
int maxPathSum(TreeNode* root);
std::vector<std::string> binaryTreePaths(TreeNode* root);
bool isValidSequence(TreeNode* root, const std::vector<int>& arr);
bool hasPathSum(TreeNode* root, int sum);
int deepestLeavesSum(TreeNode* root);
int sumOfLeftLeaves(TreeNode* root);
int pathSum(TreeNode* root, int sum);
std::vector<int> rightSideView(TreeNode* root);
int rangeSumBST(TreeNode* root, int L, int R);
int maxDepth(Node* root);
bool isCompleteTree(TreeNode* root);
TreeNode* sortedArrayToBST(std::vector<int>& nums);

inline bool isLeafNode(TreeNode* root)
{
    if(!root) {
        return false;
    }

    return !root->left && !root->right;
}

inline int maxDepth(TreeNode* root)
{
    if(!root) {
        return 0;
    }

    return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
}

inline int totalNodeCount(TreeNode* root) {
    if (!root) {
        return 0;
    }

    return 1 + totalNodeCount(root->left) + totalNodeCount(root->right);
}