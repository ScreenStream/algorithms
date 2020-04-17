#include "two-pointers.h"



/*
 * Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
 */

/// We just fix a number and then do a regular two pointer sweep across the elements that are bigger than our fixed element. So, to be able to find
/// which elements are bigger than our fixed number we first sort the array in the beginning.
vector<vector<int>> threeSum(vector<int>& nums) {
    if(nums.size() < 2)
        return {};

    sort(nums.begin(), nums.end());
    vector<vector<int>> res;

    for(int i = 0; i < nums.size() - 2; ++i) {
        if(nums[i] > 0) { /// If number in the array is larger than 0, then there is no way that when we sum this number up with the numbers larger than 0 we
                          /// will get to 0 (Since the array is sorted). So, it is pointless to continue.
            break;
        }

        if(i == 0 || (nums[i] != nums[i-1])) { /// nums[i] != nums[i-1] check is needed so that we don't include the same vector for two different but identical
                                              /// numbers.
            int lo = i+1;
            int hi = nums.size() - 1;
            int target = -nums[i];

            while(lo < hi) {
                if(nums[lo] + nums[hi] == target) {
                    res.push_back({nums[lo], nums[hi], nums[i]});

                    while(lo < hi && nums[lo] == nums[lo+1]) { /// Skip the identical numbers.
                        ++lo;
                    }
                    while(lo < hi && nums[hi] == nums[hi-1]) {
                        --hi;
                    }
                    ++lo;
                    --hi;
                } else if(nums[lo] + nums[hi] < target) {
                    while(lo < hi && nums[lo] == nums[lo+1]) {
                        ++lo;
                    }
                    ++lo;
                } else {
                    while(lo < hi && nums[hi] == nums[hi-1]) {
                        --hi;
                    }
                    --hi;
                }
            }
        }

    }

    return res;
}
