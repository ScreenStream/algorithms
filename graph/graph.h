#pragma once

#include <vector>

#include "nodes.h"

std::vector<int> findMinHeightTrees(int n, std::vector<std::vector<int>>& edges);
int findJudge(int N, std::vector<std::vector<int>>& trust);
int findCelebrity(int N);
Node* cloneGraph(Node* node);