#include "arr.h"

using namespace std;

/*
 * Given a binary array, find the maximum length of a contiguous subarray with equal number of 0 and 1.

Example 1:
Input: [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with equal number of 0 and 1.
Example 2:
Input: [0,1,0]
Output: 2
Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.
Note: The length of the given binary array will not exceed 50,000.
 */

/// Idea: The idea is to change 0 in the original array to -1. Thus, if we find SUM[i, j] == 0 then we know there are even number of -1 and 1 between index i and j.
int findMaxLength(vector<int>& nums) {
    int res = 0;
    for(auto& num : nums) {
        if(num == 0) {
            num = -1;
        }
    }

    /// will store sum-index pairs.
    unordered_map<int, int> map;

    /// This initial case is crucial.
    /// For example case [1, 0] would fail if it weren't for this line.
    /// It means that, before we loop this array, the sum is 0 initially, and because we haven't started iterating the loop yet, index is -1.
    map.insert({0, -1});

    int sum = 0;

    for(int i = 0; i < nums.size(); ++i) {
        sum += nums[i];

        if(map.count(sum)) {
            res = max(res, i - map[sum]);
        } else {
            map.insert({sum, i});
        }
    }

    return res;
}

