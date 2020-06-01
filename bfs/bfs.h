#pragma once

#include <vector>
#include <queue>
#include <unordered_set>
#include <string>

#include "nodes.h"

using std::vector;
using std::string;
using std::queue;
using std::unordered_set;

struct Employee;

int orangesRotting(vector<vector<int>>& grid);
int islandPerimeterBFS(vector<vector<int>>& grid);
int islandPerimeterMath(vector<vector<int>>& grid);
int ladderLength(const string& beginWord, const string& endWord, vector<string>& wordList);
vector<vector<int>> updateMatrix(vector<vector<int>>& matrix);
int maxDistance(vector<vector<int>>& grid);
int shortestPathBinaryMatrix(vector<vector<int>>& grid);
vector<vector<int>> levelOrder(TreeNode* root);
vector<vector<int>> levelOrderII(TreeNode* root);
vector<vector<int>> zigzagLevelOrder(TreeNode* root);
vector<double> averageOfLevels(TreeNode* root);
vector<int> largestValues(TreeNode* root);
int minDepth(TreeNode* root);
int minKnightMoves(int x, int y);
bool hasPath(vector<vector<int>> maze, vector<int> start, vector<int> destination);
vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList);
int shortestBridge(vector<vector<int>>& A);
int shortestPath(vector<vector<int>>& grid, int k);
int treasureIsland(vector<vector<char>>& island);
int getImportance(vector<Employee*>& employees, int id);
int openLock(vector<string>& deadends, string target);
int maxLevelSum(TreeNode* root);