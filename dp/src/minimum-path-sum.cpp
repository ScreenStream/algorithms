#include "dp.h"

/*
 * Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

Example:

Input:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
Output: 7
Explanation: Because the path 1→3→1→1→1 minimizes the sum.
 */

/// The reason why DP works here (but not in an actual shortest path problem) is because we can only move right and down through the matrix.
/// If we can move in all 4 directions, DP would give the wrong answer. In that case, only shortest path algorithms such as Dijkstra's or A* work.

/// O(MN) space solution.
int minPathSum(std::vector<std::vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    std::vector<std::vector<int>> dp(m, std::vector<int>(n));
    dp[0][0] = grid[0][0];

    for(int i = 1; i < grid.size(); ++i) {
        dp[i][0] = grid[i][0] + dp[i - 1][0];
    }

    for(int j = 1; j < grid[0].size(); ++j) {
        dp[0][j] = grid[0][j] + dp[0][j - 1];
    }

    for(int i = 1; i < grid.size(); ++i) {
        for(int j = 1; j < grid[0].size(); ++j) {
            dp[i][j] = std::min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        }
    }

    return dp[m - 1][n - 1];
}

/// O(M) space solution.
int minPathSumSpaceOptimal(std::vector<std::vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    /// Here, we will just use dp as a vector which will just represent a column.
    std::vector<int> dp(m);
    dp[0] = grid[0][0];

    for (int i = 1; i < m; i++) {
        dp[i] = dp[i - 1] + grid[i][0];
    }

    for (int j = 1; j < n; j++) {
        dp[0] += grid[0][j];

        for (int i = 1; i < m; i++) {
            dp[i] = std::min(dp[i - 1], dp[i]) + grid[i][j];
        }
    }

    return dp[m - 1];
}

