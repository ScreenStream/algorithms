#pragma once

#include <vector>

class NumArray {
public:
    explicit NumArray(std::vector<int>& nums);
    void update(int i, int val);
    int sumRange(int i, int j);
};

std::vector<int> xorQueries(std::vector<int>& arr, std::vector<std::vector<int>>& queries);