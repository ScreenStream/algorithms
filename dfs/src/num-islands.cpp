#include "dfs.h"

/*
 * Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

Example 1:

Input:
11110
11010
11000
00000

Output: 1
Example 2:

Input:
11000
11000
00100
00011

Output: 3
 */

/// If we were not supposed to modify the input array we could as well just use a visited matrix, which would represent the visited lands.
void dfs(std::vector<std::vector<char>>& grid, int i, int j)
{
    if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0') return;
    grid[i][j] = '0';

    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
}

int numIslands(std::vector<std::vector<char>>& grid) {
    int res = 0;

    for(int i = 0; i < grid.size(); ++i) {
        for(int j = 0; j < grid[0].size(); ++j) {
            if(grid[i][j] == '1') {
                dfs(grid, i, j);
                ++res;
            }
        }
    }

    return res;
}

/// BFS solution, which is unconventional for this question. Way longer code.
int numIslands2(std::vector<std::vector<char>>& grid) {
    std::vector<std::pair<int, int>> dirs{{0,1}, {0,-1}, {1,0}, {-1,0}};
    int res = 0;
    std::queue<std::pair<int, int>> todo;

    for(int i = 0; i < grid.size(); ++i) {
        for(int j = 0; j < grid[0].size(); ++j) {
            if(grid[i][j] == '1') {
                ++res;
                todo.push({i, j});
                grid[i][j] = '0';

                while(!todo.empty()) { /// Not coded in a typical BFS fashion, more like DFS-like BFS. We are pushing to and popping from
                                       /// the queue till lands of the current island is exhausted.
                    auto p = todo.front();
                    todo.pop();

                    for(auto& dir : dirs) {
                        int x = dir.first + p.first;
                        int y = dir.second + p.second;

                        if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == '0') {
                            continue;
                        }

                        grid[x][y] = '0';
                        todo.push({x, y});
                    }
                }
            }
        }
    }

    return res;
}