#pragma once

#include <vector>
#include <string>

int findCircleNum(std::vector<std::vector<int>>& M);
std::vector<int> findRedundantConnection(std::vector<std::vector<int>>& edges);
int removeStones(std::vector<std::vector<int>>& stones);
int makeConnected(int n, std::vector<std::vector<int>>& connections);
bool equationsPossible(std::vector<std::string>& equations);
std::vector<std::vector<std::string>> accountsMerge(std::vector<std::vector<std::string>>& accounts);
void solve(std::vector<std::vector<char>>& board); /// Surrounded Regions
int minSwapsCouples(std::vector<int>& row);
int longestConsecutive(std::vector<int>& nums);
int countServers(std::vector<std::vector<int>>& grid);