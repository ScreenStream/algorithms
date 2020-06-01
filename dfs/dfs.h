#pragma once

#include <vector>
#include <stack>
#include <string>
#include <queue>

using std::vector;
using std::string;
using std::pair;
using std::queue;

struct TreeNode;

int numIslands(vector<vector<char>>& grid);
bool exist(vector<vector<char>>& board, string word);
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor);
bool hasPathSum(TreeNode* root, int sum);
bool isValidBST(TreeNode* root);
string smallestFromLeaf(TreeNode* root);
int maxProduct(TreeNode* root);
int pseudoPalindromicPaths (TreeNode* root);
void solve(vector<vector<char>>& board); /// Surrounded Regions
int countUnivalSubtrees(TreeNode* root);
int longestUnivaluePath(TreeNode* root);
bool canPartitionKSubsets(vector<int>& nums, int k);
int maxAreaOfIsland(vector<vector<int>>& grid);
vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click);
bool canVisitAllRooms(vector<vector<int>>& rooms);
vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix);
vector<int> eventualSafeNodes(vector<vector<int>>& graph);
int removeStones(vector<vector<int>>& stones);
int numEnclaves(vector<vector<int>>& A);
int closedIsland(vector<vector<int>>& grid);
int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime);

/// GREEDY DFS
vector<string> findItinerary(vector<vector<string>>& tickets);