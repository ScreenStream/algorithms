#pragma once

#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using std::vector;
using std::string;
using std::unordered_set;
using std::unordered_map;
using std::pair;
using std::reverse;
using std::sort;
using std::stack;
using std::queue;
using std::max;
using std::min;

#include "nodes.h"

TreeNode* createBinaryTree(const string& input);
bool isSameTree(TreeNode* p, TreeNode* q);
bool isSubtree(TreeNode* s, TreeNode* t);
bool isSymmetric(TreeNode* root);
TreeNode* invertTree(TreeNode* root);
bool isValidBSTIterative(TreeNode* root);
bool isValidBSTRecursive(TreeNode* root);
int diameterOfBinaryTree(TreeNode* root);
TreeNode* lowestCommonAncestorBST(TreeNode* root, TreeNode* p, TreeNode* q);
TreeNode* lowestCommonAncestorBinaryTree(TreeNode* root, TreeNode* p, TreeNode* q);
vector<int> distanceK(TreeNode* root, TreeNode* target, int K);
int maxPathSum(TreeNode* root);
vector<string> binaryTreePaths(TreeNode* root);
bool isValidSequence(TreeNode* root, const vector<int>& arr);
bool hasPathSum(TreeNode* root, int sum);
int deepestLeavesSum(TreeNode* root);
int sumOfLeftLeaves(TreeNode* root);
int pathSum(TreeNode* root, int sum);
vector<int> rightSideView(TreeNode* root);
int rangeSumBST(TreeNode* root, int L, int R);
int maxDepth(Node* root);
bool isCompleteTree(TreeNode* root);
TreeNode* sortedArrayToBST(vector<int>& nums);
vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete);
int kthSmallest(TreeNode* root, int k);
int findTilt(TreeNode* root);
void flatten(TreeNode* root);
void recoverTree(TreeNode* root);
int sumNumbers(TreeNode* root);
vector<vector<int>> verticalTraversal(TreeNode* root);
bool findTarget(TreeNode* root, int k);
int distributeCoins(TreeNode* root);
vector<int> sumOfDistancesInTree(int N, vector<vector<int>>& edges);
int minCameraCover(TreeNode* root);
TreeNode* removeEdge(TreeNode* node);
int pathSumIV(vector<int>& nums);
vector<TreeNode*> findDuplicateSubtrees(TreeNode* root);
int maxDepth(TreeNode* root);
TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);
int countNodes(TreeNode* root);
vector<TreeNode*> allPossibleFBT(int N);
TreeNode* trimBST(TreeNode* root, int L, int R);
TreeNode* deleteNode(TreeNode* root, int key);
TreeNode* insertIntoBST(TreeNode* root, int val);
bool isBalanced(TreeNode* root);
Node* maximumAverageSubtree(Node* root);
TreeNode* buildTreeII(vector<int>& inorder, vector<int>& postorder); /// construct-binary-tree-from-inorder-and-postorder-traversal
vector<int> findMode(TreeNode* root);
TreeNode* bstFromPreorder(vector<int>& preorder);
int minDiffInBST(TreeNode* root);

// https://leetcode.com/discuss/interview-question/546703/Microsoft-or-OA-2020-or-Count-Visible-Nodes-in-Binary-Tree
int countVisibleNodes(TreeNode* root);

class Codec {
public:
    /// Encodes a tree to a single string.
    string serialize(TreeNode* root);

    /// Decodes your encoded data to tree.
    TreeNode* deserialize(string data);
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