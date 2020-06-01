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
std::vector<TreeNode*> delNodes(TreeNode* root, std::vector<int>& to_delete);
int kthSmallest(TreeNode* root, int k);
int findTilt(TreeNode* root);
void flatten(TreeNode* root);
void recoverTree(TreeNode* root);
int sumNumbers(TreeNode* root);
std::vector<std::vector<int>> verticalTraversal(TreeNode* root);
bool findTarget(TreeNode* root, int k);
int distributeCoins(TreeNode* root);
std::vector<int> sumOfDistancesInTree(int N, std::vector<std::vector<int>>& edges);
int minCameraCover(TreeNode* root);
Node* connect(Node* root); /// Populating Next Right Pointers in Each Node
TreeNode* removeEdge(TreeNode* node);
int pathSumIV(std::vector<int>& nums);
std::vector<TreeNode*> findDuplicateSubtrees(TreeNode* root);
int maxDepth(TreeNode* root);
TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);
int countNodes(TreeNode* root);
std::vector<TreeNode*> allPossibleFBT(int N);
TreeNode* trimBST(TreeNode* root, int L, int R);

// https://leetcode.com/discuss/interview-question/546703/Microsoft-or-OA-2020-or-Count-Visible-Nodes-in-Binary-Tree
int countVisibleNodes(TreeNode* root);

class Codec {
public:
    /// Encodes a tree to a single string.
    std::string serialize(TreeNode* root);

    /// Decodes your encoded data to tree.
    TreeNode* deserialize(std::string data);
};

class BSTIterator {
public:
    BSTIterator(TreeNode* root);

    /** @return the next smallest number */
    int next();

    /** @return whether we have a next smallest number */
    bool hasNext();
};

inline bool isLeafNode(TreeNode* root)
{
    if(!root) {
        return false;
    }

    return !root->left && !root->right;
}

inline int totalNodeCount(TreeNode* root) {
    if (!root) {
        return 0;
    }

    return 1 + totalNodeCount(root->left) + totalNodeCount(root->right);
}