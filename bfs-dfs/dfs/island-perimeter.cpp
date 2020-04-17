#include "bfs-dfs/dfs/dfs.h"

/*
 * You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water.

Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).

The island doesn't have "lakes" (water inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.



Example:

Input:
[[0,1,0,0],
 [1,1,1,0],
 [0,1,0,0],
 [1,1,0,0]]

Output: 16
 */

int islandPerimeter(std::vector<std::vector<int>>& grid) {
    int res = 0;

    for(int i = 0; i < grid.size(); ++i) {
        for(int j = 0; j < grid[0].size(); ++j) {
            if(grid[i][j] == 1) {
                std::vector<std::pair<int,int>> dirs{{0,1},{0,-1},{1,0},{-1,0}};

                for(auto& dir : dirs) {
                    if(i+dir.first < 0 || j+dir.second < 0 || i+dir.first >= grid.size() || j+dir.second >= grid[0].size()) {
                        res++;
                        continue;
                    }

                    res += grid[i+dir.first][j+dir.second] == 0 ? 1 : 0;
                }

            }
        }
    }

    return res;
}

/// If the current dot is a land, count if it has any RIGHT neighbour or DOWN neighbour;
/// The result is (lands * 4 - neighbours * 2) is because:

/*
Since every adjacent lands made two sides disappeared (as picture below).

+--+     +--+                   +--+--+
|  |  +  |  |          ->       |     |
+--+     +--+                   +--+--+

4 represent total edges of a land which is 4.
2 represent that disappeared 2 edges.
 */

int islandPerimeterMath(std::vector<std::vector<int>>& grid)
{
    int lands = 0;
    int neighbours = 0;

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                lands++;
                if (i < grid.size() - 1 && grid[i + 1][j] == 1) neighbours++;
                if (j < grid[i].size() - 1 && grid[i][j + 1] == 1) neighbours++;
            }
        }
    }

    return lands * 4 - neighbours * 2;
}

