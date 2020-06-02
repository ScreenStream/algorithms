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
vector<int> preorder(Node* root);