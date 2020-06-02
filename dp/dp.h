#pragma once

#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <cmath>

using std::vector;
using std::string;
using std::queue;
using std::unordered_map;
using std::pair;
using std::unordered_set;
using std::max;
using std::min;
using std::sort;
using std::reverse;

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
int minCostClimbingStairs(vector<int>& cost);
int minPathSum(vector<vector<int>>& grid);
int coinChange(vector<int>& coins, int amount);
int minFallingPathSum(vector<vector<int>>& A);
int mincostTickets(vector<int>& days, vector<int>& costs);
int minSteps(int n); /// 2-keys-keyboard
int numSquares(int n); /// perfect-squares
int minimumTotal(vector<vector<int>>& triangle); /// triangle.
// last-stone-weight-ii from knapsack
// ones-and-zeroes from knapsack
int maximalSquare(vector<vector<char>>& matrix);
int calculateMinimumHP(vector<vector<int>>& dungeon); /// dungeon-game
int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations);



/// Distinct Ways
int climbStairs(int n);
int uniquePaths(int m, int n);
int numRollsToTarget(int d, int f, int target);
double knightProbability(int N, int K, int r, int c);
int findTargetSumWays(vector<int>& nums, int S);
int combinationSum4(vector<int>& nums, int target);
int knightDialer(int N);
int dieSimulator(int n, vector<int>& rollMax);
// partition-equal-subset-sum from knapsack
double soupServings(int N);
int numTilings(int N);
int minSwap(vector<int>& A, vector<int>& B);
int findNumberOfLIS(vector<int>& nums);
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid);
int findPaths(int m, int n, int N, int i, int j);
int numWays(int steps, int arrLen);
int countVowelPermutation(int n);


/// Merging Intervals
int mctFromLeafValues(vector<int>& arr);
int numTrees(int n);
int minScoreTriangulation(vector<int>& A);
int removeBoxes(vector<int>& boxes);
int mergeStones(vector<int>& stones, int K);
int maxCoins(vector<int>& nums);
int getMoneyAmount(int n);



/// DP on Strings
int longestCommonSubsequence(string text1, string text2);
int countSubstrings(string s);
int longestPalindromeSubseq(string s);
string shortestCommonSupersequence(string& A, string& B);
int minDistance(string word1, string word2);
int numDistinct(string s, string t);
int minimumDeleteSum(string s1, string s2);
string longestPalindrome(string s);



/// Decision Making
int rob(vector<int>& nums);
int maxProfit(vector<int>& prices);
int maxProfit(vector<int>& prices, int fee);
int maxProfitCooldown(vector<int>& prices);
int maxProfitIII(vector<int>& prices);
int maxProfit(int k, vector<int>& prices);



//////////////////////////////
int fib(int N);
int numDecodings(string s);
int countSquares(vector<vector<int>>& A);
int longestIncreasingPath(const vector<vector<int>>& matrix);
int cherryPickup(vector<vector<int>>& grid);
int cherryPickupII(vector<vector<int>>& grid);
int ways(vector<string>& pizza, int k); /// number-of-ways-of-cutting-a-pizza
bool isMatch(string s, string p); /// wildcard-matching
bool isRegexMatch(string s, string p);
int longestValidParentheses(string s);
int maximalRectangle(vector<vector<char>>& matrix);
bool isInterleave(string s1, string s2, string s3);
bool wordBreak(string s, vector<string>& wordDict);
vector<string> wordBreakII(string s, vector<string>& wordDict);
int longestStrChain(vector<string>& words);
int robII(vector<int>& nums);
int minDistanceII(string word1, string word2);


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
int lengthOfLIS(vector<int>& nums);
vector<int> largestDivisibleSubset(vector<int>& nums);
int maxEnvelopes(vector<vector<int>>& envelopes); /// Russian Doll Envelopes
int findLongestChain(vector<vector<int>>& pairs);
int deleteAndEarn(vector<int>& nums);

/// BitMasking
bool canPartitionKSubsets(vector<int>& nums, int k);
vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people);
int numberWays(vector<vector<int>>& hats);

/// Palindrome
int minCut(string s);

/// Matrix/2D Array
vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K);

class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix);
    int sumRegion(int row1, int col1, int row2, int col2);
};

/// Hash + DP
int longestArithSeqLength(vector<int>& A);
int longestSubsequence(vector<int>& arr, int difference);

/// State machine
int maxProfitII(vector<int>& prices);

/// Minimax DP
bool PredictTheWinner(vector<int>& nums);
bool stoneGame(vector<int>& piles);

int maxSumDivThree(vector<int>& nums);
int maxTurbulenceSize(vector<int>& A);

/// DIGIT DP
int atMostNGivenDigitSet(vector<string>& D, int N);

/// MINIMAX DP
int stoneGameII(vector<int>& piles);
string stoneGameIII(vector<int>& stoneValue);

/////////////////////
bool isSubPath(ListNode* head, TreeNode* root);
int checkRecord(int n);
int nthUglyNumber(int n);
int minimumDistance(string word);
int oddEvenJumps(vector<int>& A);
int superEggDrop(int K, int N);
int lenLongestFibSubseq(vector<int>& A);
int leastOpsExpressTarget(int x, int target);
int racecar(int target);
vector<TreeNode*> generateTrees(int n); /// unique-binary-search-trees-ii
int robIII(TreeNode* root);
int numWays(int n, int k);

