#pragma once

#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cmath>

struct TreeNode;
struct ListNode;

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
int cherryPickup(std::vector<std::vector<int>>& grid);
int cherryPickupII(std::vector<std::vector<int>>& grid);
int ways(std::vector<std::string>& pizza, int k); /// number-of-ways-of-cutting-a-pizza
bool isMatch(std::string s, std::string p); /// wildcard-matching
bool isRegexMatch(std::string s, std::string p);
int longestValidParentheses(std::string s);
int maximalRectangle(std::vector<std::vector<char>>& matrix);
bool isInterleave(std::string s1, std::string s2, std::string s3);
bool wordBreak(std::string s, std::vector<std::string>& wordDict);
int longestStrChain(std::vector<std::string>& words);
int robII(std::vector<int>& nums);


/////////// https://leetcode.com/discuss/general-discussion/662866/dp-for-beginners-problems-patterns-sample-solutions
/*
 * Longest Increasing Subsequence variants:
https://leetcode.com/problems/longest-increasing-subsequence/
https://leetcode.com/problems/largest-divisible-subset/
https://leetcode.com/problems/russian-doll-envelopes/
https://leetcode.com/problems/maximum-length-of-pair-chain/
https://leetcode.com/problems/number-of-longest-increasing-subsequence/
https://leetcode.com/problems/delete-and-earn/
https://leetcode.com/problems/longest-string-chain/

Partition Subset:
https://leetcode.com/problems/partition-equal-subset-sum/

BitMasking:
https://leetcode.com/problems/partition-to-k-equal-sum-subsets/
https://leetcode.com/problems/smallest-sufficient-team/
https://leetcode.com/problems/number-of-ways-to-wear-different-hats-to-each-other/

Longest Common Subsequence Variant:
https://leetcode.com/problems/longest-common-subsequence/
https://leetcode.com/problems/edit-distance/
https://leetcode.com/problems/distinct-subsequences/
https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/

Palindrome:
https://leetcode.com/problems/palindrome-partitioning-ii/
https://leetcode.com/problems/palindromic-substrings/

Coin Change variant:
https://leetcode.com/problems/coin-change/
https://leetcode.com/problems/coin-change-2/
https://leetcode.com/problems/combination-sum-iv/
https://leetcode.com/problems/perfect-squares/
https://leetcode.com/problems/minimum-cost-for-tickets/
https://leetcode.com/problems/last-stone-weight-ii/

Matrix multiplication variant:
https://leetcode.com/problems/minimum-score-triangulation-of-polygon/
https://leetcode.com/problems/minimum-cost-tree-from-leaf-values/
https://leetcode.com/problems/burst-balloons/

Matrix/2D Array:
https://leetcode.com/problems/matrix-block-sum/
https://leetcode.com/problems/range-sum-query-2d-immutable/
https://leetcode.com/problems/dungeon-game/
https://leetcode.com/problems/triangle/
https://leetcode.com/problems/maximal-square/
https://leetcode.com/problems/minimum-falling-path-sum/

Hash + DP:
https://leetcode.com/problems/target-sum/
https://leetcode.com/problems/longest-arithmetic-sequence/
https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference/
https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/

State machine:
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/

Depth First Search + DP:
https://leetcode.com/problems/out-of-boundary-paths/
https://leetcode.com/problems/knight-probability-in-chessboard/

Minimax DP:
https://leetcode.com/problems/predict-the-winner/
https://leetcode.com/problems/stone-game/

Misc:
https://leetcode.com/problems/greatest-sum-divisible-by-three/
https://leetcode.com/problems/decode-ways/
https://leetcode.com/problems/perfect-squares/
https://leetcode.com/problems/count-numbers-with-unique-digits/
https://leetcode.com/problems/longest-turbulent-subarray/
https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/
 */

/// Longest Increasing Subsequence variants
int lengthOfLIS(std::vector<int>& nums);
std::vector<int> largestDivisibleSubset(std::vector<int>& nums);
int maxEnvelopes(std::vector<std::vector<int>>& envelopes); /// Russian Doll Envelopes
int findLongestChain(std::vector<std::vector<int>>& pairs);
int deleteAndEarn(std::vector<int>& nums);

/// BitMasking
bool canPartitionKSubsets(std::vector<int>& nums, int k);
std::vector<int> smallestSufficientTeam(std::vector<std::string>& req_skills, std::vector<std::vector<std::string>>& people);
int numberWays(std::vector<std::vector<int>>& hats);

/// Palindrome
int minCut(std::string s);

/// Matrix/2D Array
std::vector<std::vector<int>> matrixBlockSum(std::vector<std::vector<int>>& mat, int K);

class NumMatrix {
public:
    NumMatrix(std::vector<std::vector<int>>& matrix);
    int sumRegion(int row1, int col1, int row2, int col2);
};

/// Hash + DP
int longestArithSeqLength(std::vector<int>& A);
int longestSubsequence(std::vector<int>& arr, int difference);

/// State machine
int maxProfitII(std::vector<int>& prices);

/// Minimax DP
bool PredictTheWinner(std::vector<int>& nums);
bool stoneGame(std::vector<int>& piles);

int maxSumDivThree(std::vector<int>& nums);
int maxTurbulenceSize(std::vector<int>& A);



/////////////////////
bool isSubPath(ListNode* head, TreeNode* root);