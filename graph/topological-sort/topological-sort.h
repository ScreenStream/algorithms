#pragma once

#include <vector>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>

using std::vector;
using std::string;
using std::unordered_set;
using std::unordered_map;
using std::queue;

bool canFinish(int numCourses, vector<vector<int>>& prerequisites);
vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites);
string alienOrder(vector<string>& words);
int longestIncreasingPathTopo(vector<vector<int>>& matrix);
vector<int> eventualSafeNodes(vector<vector<int>>& graph);