#pragma once

#include <vector>
#include <stack>
#include <string>
#include <queue>

struct TreeNode;

int numIslands(std::vector<std::vector<char>>& grid);
bool exist(std::vector<std::vector<char>>& board, std::string word);
std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int newColor);
bool hasPathSum(TreeNode* root, int sum);
bool isValidBST(TreeNode* root);
std::string smallestFromLeaf(TreeNode* root);
int maxProduct(TreeNode* root);
int pseudoPalindromicPaths (TreeNode* root);
void solve(std::vector<std::vector<char>>& board); /// Surrounded Regions
int countUnivalSubtrees(TreeNode* root);
int longestUnivaluePath(TreeNode* root);
bool canPartitionKSubsets(std::vector<int>& nums, int k);

/// GREEDY DFS
std::vector<std::string> findItinerary(std::vector<std::vector<std::string>>& tickets);