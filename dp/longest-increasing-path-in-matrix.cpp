#include "dp.h"

/*
 * Given an integer matrix, find the length of the longest increasing path.

From each cell, you can either move to four directions: left, right, up or down. You may NOT move diagonally or move outside of the boundary (i.e. wrap-around is not allowed).

Example 1:

Input: nums =
[
  [9,9,4],
  [6,6,8],
  [2,1,1]
]
Output: 4
Explanation: The longest increasing path is [1, 2, 6, 9].
Example 2:

Input: nums =
[
  [3,4,5],
  [3,2,6],
  [2,2,1]
]
Output: 4
Explanation: The longest increasing path is [3, 4, 5, 6]. Moving diagonally is not allowed.
 */

int dfs(int i, int j, const vector<vector<int>>& matrix, vector<vector<int>>& dp, const vector<pair<int, int>>& dirs)
{
    if(dp[i][j] != 0) {
        return dp[i][j];
    }

    int res = 1; /// Default value is 1 not 0!

    for(const auto& dir : dirs) {
        int x = dir.first + i;
        int y = dir.second + j;

        if(x < 0 || y < 0 || x >= matrix.size() || y >= matrix[0].size() || matrix[x][y] <= matrix[i][j]) {
            continue;
        }

        int len = 1 + dfs(x, y, matrix, dp, dirs);


        res = max(res, len);
    }

    dp[i][j] = res;

    return res;
}

/*
 * To find the longest increasing path length, since the desired path has to start somewhere in the matrix,
 * we use 2D array dp[i][j]to represent the length of longest increasing path STARTING FROM location (i,j).
 */
int longestIncreasingPath(const vector<vector<int>>& matrix) {
    if(matrix.empty()) {
        return 0;
    }

    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<int>> dp(m, vector<int>(n));

    vector<pair<int, int>> dirs{{0,1}, {0,-1},{1,0}, {-1,0}};
    int res = 0;

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            int len = dfs(i, j, matrix, dp, dirs);
            res = max(res, len);
        }
    }

    return res;
}