#pragma once

#include <vector>
#include <string>

using std::vector;
using std::string;

int findCircleNum(vector<vector<int>>& M);
vector<int> findRedundantConnection(vector<vector<int>>& edges);
int removeStones(vector<vector<int>>& stones);
int makeConnected(int n, vector<vector<int>>& connections);
bool equationsPossible(vector<string>& equations);
vector<vector<string>> accountsMerge(vector<vector<string>>& accounts);
void solve(vector<vector<char>>& board); /// Surrounded Regions
int minSwapsCouples(vector<int>& row);
int longestConsecutive(vector<int>& nums);
int countServers(vector<vector<int>>& grid);
vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries); /// Evaluate Division
int regionsBySlashes(vector<string>& grid);