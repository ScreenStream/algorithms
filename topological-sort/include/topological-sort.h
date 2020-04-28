#pragma once

#include <vector>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>

bool canFinish(int numCourses, std::vector<std::vector<int>>& prerequisites);
std::vector<int> findOrder(int numCourses, std::vector<std::vector<int>>& prerequisites);
std::string alienOrder(std::vector<std::string>& words);
int longestIncreasingPathTopo(std::vector<std::vector<int>>& matrix);