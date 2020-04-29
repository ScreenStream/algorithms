#include "topological-sort.h"

using namespace std;

/*
 * Given an integer matrix, find the length of the longest increasing path.

From each cell, you can either move to four directions: left, right, up or down.
 You may NOT move diagonally or move outside of the boundary (i.e. wrap-around is not allowed).

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

/// THIS QUESTION IS MOST EASILY SOLVED BY DP THEREFORE DP SOLUTION OF THIS QUESTION IS UNDER DP DIRECTORY.
/// HOWEVER, SINCE TOPOLOGICAL SORT SOLUTION IS ALSO INTUITIVE, I HAVE WRITTEN ANOTHER SOLUTION USING TOPOLOGICAL SORT FOR THE QUESTION HERE.
int longestIncreasingPathTopo(vector<vector<int>>& matrix) {
    if(matrix.empty()) {
        return 0;
    }

    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> inDegrees(m, vector<int>(n));

    vector<pair<int, int>> dirs{{0,1}, {0,-1}, {1,0}, {-1,0}};

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            for(const auto& dir : dirs) {
                int x = i + dir.first;
                int y = j + dir.second;

                if(x < 0 || y < 0 || x >= m || y >= n) {
                    continue;
                }

                if(matrix[x][y] > matrix[i][j]) {
                    inDegrees[i][j]++;
                }
            }
        }
    }

    queue<pair<int, int>> q;
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            if(inDegrees[i][j] == 0) {
                q.push({i,j});
            }
        }
    }

    int res = 0;

    while(!q.empty()) {
        int size = q.size();

        for(int i = 0; i < size; ++i) {
            auto loc = q.front();
            q.pop();

            int x = loc.first;
            int y = loc.second;

            for(const auto& dir : dirs) {
                int nx = x + dir.first;
                int ny = y + dir.second;

                if(nx < 0 || ny < 0 || nx >= m || ny >= n) {
                    continue;
                }

                if(matrix[nx][ny] < matrix[x][y] && --inDegrees[nx][ny] == 0) {
                    /// It is important to check for in-degree of the jumped cell being 0 so that we do not get TLE.
                    /// If it is not 0, it means that there is still an adjacent cell bigger than the cell we are processing,
                    /// Path of the adjacent large node is still being processed by the queue in the algorithm, so it will be handled.
                    /// If we process this node even if in this stage it is not a source node, it will be a waste of processing time.
                    /// A longer path is already coming through this node so we have no power here.
                    q.push({nx, ny});
                }
            }
        }

        ++res;
    }

    return res;
}