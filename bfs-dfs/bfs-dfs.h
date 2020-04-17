#pragma once

#include <vector>
#include <string>
#include <queue>
#include <stack>

using std::vector;
using std::string;
using std::stack;
using std::queue;
using std::pair;

void wallsAndGates(vector<vector<int>>& rooms);
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor);