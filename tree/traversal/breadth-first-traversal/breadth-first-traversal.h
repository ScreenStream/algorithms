#pragma once

#include <vector>
#include <queue>

using std::vector;
using std::queue;

#include "nodes.h"

vector<vector<int>> levelOrder(TreeNode* root);
vector<vector<int>> levelOrderII(TreeNode* root);
vector<vector<int>> zigzagLevelOrder(TreeNode* root);
vector<vector<int>> levelOrder(Node* root);
