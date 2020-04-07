#include "dp.h"

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> m;

    for(int i = 0; i < nums.size(); ++i) {
        int remainder = target - nums[i];
        if(m.find(remainder) != m.end()) {
            return {i, m[remainder]};
        } else {
            m.insert({nums[i], i});
        }
    }

    return {};
}
