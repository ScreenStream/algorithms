#pragma once

#include <vector>
#include <stack>

#include "nodes.h"

std::vector<int> inorderTraversalRecursive(TreeNode* root);
std::vector<int> inorderTraversalIterative(TreeNode* root);

std::vector<int> preorderTraversalRecursive(TreeNode* root);
std::vector<int> preorderTraversalIterative(TreeNode* root);

std::vector<int> postorderTraversalRecursive(TreeNode* root);
std::vector<int> postorderTraversalIterative(TreeNode* root);