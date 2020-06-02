#pragma once

#include <vector>
#include <stack>

using std::vector;

#include "nodes.h"

vector<int> inorderTraversalRecursive(TreeNode* root);
vector<int> inorderTraversalIterative(TreeNode* root);

vector<int> preorderTraversalRecursive(TreeNode* root);
vector<int> preorderTraversalIterative(TreeNode* root);

vector<int> postorderTraversalRecursive(TreeNode* root);
vector<int> postorderTraversalIterative(TreeNode* root);

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
TreeNode* bstFromPreorder(vector<int>& preorder);
int minDiffInBST(TreeNode* root);
vector<int> preorder(Node* root);

TreeNode* buildTreeII(vector<int>& inorder, vector<int>& postorder); /// construct-binary-tree-from-inorder-and-postorder-traversal
vector<int> findMode(TreeNode* root);