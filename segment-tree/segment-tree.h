#pragma once

#include <vector>

using std::vector;

class NumArray {
public:
    explicit NumArray(vector<int>& nums);
    void update(int i, int val);
    int sumRange(int i, int j);
};

vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries);
int largestRectangleArea(vector<int>& heights);