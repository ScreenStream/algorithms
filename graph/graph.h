#pragma once

#include <vector>

using std::vector;

#include "nodes.h"

vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges);
int findJudge(int N, vector<vector<int>>& trust);
int findCelebrity(int N);
Node* cloneGraph(Node* node);
bool validTree(int n, vector<vector<int>> edges); /// UF + DFS + BFS