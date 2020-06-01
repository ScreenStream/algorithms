#pragma once

#include <vector>
#include <queue>
#include <unordered_set>
#include <string>

#include "nodes.h"

struct Employee;

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
std::vector<int> largestValues(TreeNode* root);
int minDepth(TreeNode* root);
int minKnightMoves(int x, int y);
bool hasPath(std::vector<std::vector<int>> maze, std::vector<int> start, std::vector<int> destination);
std::vector<std::vector<std::string>> findLadders(std::string beginWord, std::string endWord, std::vector<std::string>& wordList);
int shortestBridge(std::vector<std::vector<int>>& A);
int shortestPath(std::vector<std::vector<int>>& grid, int k);
int treasureIsland(std::vector<std::vector<char>>& island);
int getImportance(std::vector<Employee*>& employees, int id);