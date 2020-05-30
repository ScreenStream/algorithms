#pragma once

#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cmath>

/*
 * Patterns
 * https://leetcode.com/discuss/general-discussion/458695/dynamic-programming-patterns

Minimum (Maximum) Path to Reach a Target
Distinct Ways
Merging Intervals
DP on Strings
Decision Making

 */

/// Minimum (Maximum) Path to Reach a Target
int minCostClimbingStairs(std::vector<int>& cost);
int minPathSum(std::vector<std::vector<int>>& grid);
int coinChange(std::vector<int>& coins, int amount);
int minFallingPathSum(std::vector<std::vector<int>>& A);
int mincostTickets(std::vector<int>& days, std::vector<int>& costs);
int minSteps(int n); /// 2-keys-keyboard
int numSquares(int n); /// perfect-squares
int minimumTotal(std::vector<std::vector<int>>& triangle); /// triangle.
// last-stone-weight-ii from knapsack
// ones-and-zeroes from knapsack
int maximalSquare(std::vector<std::vector<char>>& matrix);
int calculateMinimumHP(std::vector<std::vector<int>>& dungeon); /// dungeon-game
int minRefuelStops(int target, int startFuel, std::vector<std::vector<int>>& stations);



/// Distinct Ways
int climbStairs(int n);
int uniquePaths(int m, int n);
int numRollsToTarget(int d, int f, int target);
double knightProbability(int N, int K, int r, int c);
int findTargetSumWays(std::vector<int>& nums, int S);
int combinationSum4(std::vector<int>& nums, int target);
int knightDialer(int N);
int dieSimulator(int n, std::vector<int>& rollMax);
// partition-equal-subset-sum from knapsack
double soupServings(int N);
int numTilings(int N);
int minSwap(std::vector<int>& A, std::vector<int>& B);
int findNumberOfLIS(std::vector<int>& nums);
int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid);
int findPaths(int m, int n, int N, int i, int j);
int numWays(int steps, int arrLen);
int countVowelPermutation(int n);



/// Merging Intervals
int mctFromLeafValues(std::vector<int>& arr);
int numTrees(int n);
int minScoreTriangulation(std::vector<int>& A);
int removeBoxes(std::vector<int>& boxes);
int mergeStones(std::vector<int>& stones, int K);
int maxCoins(std::vector<int>& nums);
int getMoneyAmount(int n);



/// DP on Strings
int longestCommonSubsequence(std::string text1, std::string text2);
int countSubstrings(std::string s);
int longestPalindromeSubseq(std::string s);
std::string shortestCommonSupersequence(std::string& A, std::string& B);
int minDistance(std::string word1, std::string word2);
int numDistinct(std::string s, std::string t);
int minimumDeleteSum(std::string s1, std::string s2);
std::string longestPalindrome(std::string s);



/// Decision Making
int rob(std::vector<int>& nums);
int maxProfit(std::vector<int>& prices);
int maxProfit(std::vector<int>& prices, int fee);
int maxProfitCooldown(std::vector<int>& prices);
int maxProfitIII(std::vector<int>& prices);
int maxProfit(int k, std::vector<int>& prices);




//////////////////////////////
int fib(int N);
std::vector<int> twoSum(std::vector<int>& nums, int target);
int numDecodings(std::string s);
int countSquares(std::vector<std::vector<int>>& A);
int longestIncreasingPath(const std::vector<std::vector<int>>& matrix);

