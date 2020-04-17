#pragma once

#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cmath>

int fib(int N);
std::vector<int> twoSum(std::vector<int>& nums, int target);
int coinChange(std::vector<int>& coins, int amount);
int minPathSum(std::vector<std::vector<int>>& grid);
int minPathSumSpaceOptimal(std::vector<std::vector<int>>& grid);
int robRecursive(std::vector<int>& nums);
int minCostClimbingStairs(std::vector<int>& cost);
int climbStairs(int n);
int uniquePaths(int m, int n);
int numDecodings(std::string s);
int minFallingPathSum(std::vector<std::vector<int>>& A);
int mincostTickets(std::vector<int>& days, std::vector<int>& costs);
int minSteps(int n);
int numSquares(int n);
int minimumTotal(std::vector<std::vector<int>>& triangle); // Triangle question.
int maximalSquare(std::vector<std::vector<char>>& matrix);