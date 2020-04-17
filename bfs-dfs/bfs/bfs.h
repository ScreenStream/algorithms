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
using std::max;
using std::min;

struct Employee;

int orangesRotting(vector<vector<int>>& grid);
int ladderLength(const string& beginWord, const string& endWord, vector<string>& wordList);
vector<vector<int>> updateMatrix(vector<vector<int>>& matrix);
int maxDistance(vector<vector<int>>& grid);
int shortestPathBinaryMatrix(vector<vector<int>>& grid);
vector<vector<int>> levelOrder(TreeNode* root);
vector<vector<int>> levelOrderII(TreeNode* root);
vector<vector<int>> zigzagLevelOrder(TreeNode* root);
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
Node* connect(Node* root); /// Populating Next Right Pointers in Each Node
Node* connectII(Node* root);
int shortestPath(vector<vector<char>>& islands);
int tallestBuilding(vector<vector<char>>& grid);