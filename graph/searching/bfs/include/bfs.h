#pragma once

#include <vector>
#include <queue>
#include <unordered_set>
#include <string>

#include "nodes.h"

int orangesRotting(std::vector<std::vector<int>>& grid);
int islandPerimeterBFS(std::vector<std::vector<int>>& grid);
int islandPerimeterMath(std::vector<std::vector<int>>& grid);
int ladderLength(const std::string& beginWord, const std::string& endWord, std::vector<std::string>& wordList);
std::vector<std::vector<int>> updateMatrix(std::vector<std::vector<int>>& matrix);
int maxDistance(std::vector<std::vector<int>>& grid);
int shortestPathBinaryMatrix(std::vector<std::vector<int>>& grid);
std::vector<std::vector<int>> levelOrder(TreeNode* root);
std::vector<std::vector<int>> levelOrderII(TreeNode* root);
std::vector<std::vector<int>> zigzagLevelOrder(TreeNode* root);
std::vector<double> averageOfLevels(TreeNode* root);
int minDepth(TreeNode* root);