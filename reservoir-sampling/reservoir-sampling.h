#pragma once

#include <vector>

class RandomPickIndex {
public:
    RandomPickIndex(std::vector<int>& nums);
    int pick(int target);
};


