#pragma once

#include <vector>

class NumArray {
public:
    explicit NumArray(std::vector<int>& nums);
    void update(int i, int val);
    int sumRange(int i, int j);
};