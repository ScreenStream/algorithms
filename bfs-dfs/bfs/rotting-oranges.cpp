#include "bfs.h"

int orangesRotting(std::vector<std::vector<int>>& grid) {
    int minutes = 0;

    std::queue<std::vector<int>> rottens;
    int fresh_count = 0;

    for(int i = 0; i < grid.size(); ++i) {
        for(int j = 0; j < grid[0].size(); ++j) {
            if(grid[i][j] == 2) {
                rottens.push({i,j});
            } else if(grid[i][j] == 1) {
                ++fresh_count;
            }
        }
    }

    std::vector<std::vector<int>> dirs{{0,1},{0,-1},{1,0},{-1,0}};

    if(fresh_count == 0) return 0;

    while(!rottens.empty()) {
        ++minutes;
        int size = rottens.size();

        for(int i = 0; i < size; ++i) {
            auto cell = rottens.front();
            rottens.pop();

            for(auto dir : dirs) {
                int x = dir[0] + cell[0];
                int y = dir[1] + cell[1];

                if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] != 1) continue;

                grid[x][y] = 2;
                rottens.push({x,y});
                --fresh_count;
            }
        }
    }

    return fresh_count == 0 ? minutes - 1 : -1;
}
