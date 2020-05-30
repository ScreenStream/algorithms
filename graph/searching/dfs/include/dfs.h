#pragma once

#include <vector>
#include <stack>
#include <string>
#include <queue>

int numIslands(std::vector<std::vector<char>>& grid);
bool exist(std::vector<std::vector<char>>& board, std::string word);
std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int newColor);