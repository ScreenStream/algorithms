#include "dp.h"

/*
 * Given a 2D binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

Example:

Input:

1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0

Output: 4
 */


/*
 * To apply DP, we define the state as the maximal size (square = size * size) of the square that can be formed TILL point (i, j), denoted as dp[i][j].

For the topmost row (i = 0) and the leftmost column (j = 0), we have dp[i][j] = matrix[i][j] - '0',
 meaning that it can at most form a square of size 1 when the matrix has a '1' in that cell.

When i > 0 and j > 0, if matrix[i][j] = '0', then dp[i][j] = 0 since no square will be able to contain the '0' at that cell.
 If matrix[i][j] = '1', we will have dp[i][j] = min(dp[i-1][j-1], dp[i-1][j], dp[i][j-1]) + 1,
 which means that the square will be limited by its left, upper and upper-left neighbors.
 */
/// O(m*n) space.
int maximalSquare(std::vector<std::vector<char>>& matrix) {
    if(matrix.empty()) {
        return 0;
    }

    int m = matrix.size();
    int n = matrix[0].size();
    std::vector<std::vector<int>> dp(m, std::vector<int>(n));
    int edge = 0;

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            if(!i || !j || matrix[i][j] == '0') {
                dp[i][j] = matrix[i][j] - '0';
            } else {
                dp[i][j] = std::min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1; /// Taking minimum out of the options will lead to SQUARE edge discovery.
            }

            edge = std::max(edge, dp[i][j]);
        }
    }

    return edge * edge;
}

/*
 * In the above code, it uses O(mn) space. Actually each time when we update dp[i][j], we only need dp[i-1][j-1], dp[i-1][j] (the previous row) and
 * dp[i][j-1] (the current row). So we may just maintain a row and a variable.
 */
/// O(n) space.
int maximalSquare2(std::vector<std::vector<char>>& matrix) {
    if (matrix.empty()) {
        return 0;
    }

    int m = matrix.size();
    int n = matrix[0].size();
    int edgeLength = 0;
    int pre = 0;

    std::vector<int> dp(n, 0);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int temp = dp[j];

            if (!i || !j || matrix[i][j] == '0') {
                dp[j] = matrix[i][j] - '0';
            } else {
                dp[j] = std::min({pre, dp[j], dp[j - 1]}) + 1;
            }

            edgeLength = std::max(edgeLength, dp[j]);
            pre = temp;
        }
    }

    return edgeLength * edgeLength;
}


