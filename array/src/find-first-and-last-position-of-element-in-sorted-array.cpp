#include "arr.h"

/*
 * Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
 */

/*
 * Why below solıtion works:
 *
 * When we use mid = (i+j)/2, the mid is rounded to floor. In other words, mid is always BIASED TOWARDS THE LEFT.
 * So, to find the lower bound, we go with the conventional binary search. However, to find the upper bound, we must make the mid biased towards
 * the right. That is why we add 1 to mid in the second while loop below.
 */
std::vector<int> searchRange(std::vector<int>& nums, int target) {
    if(nums.empty())
        return {-1,-1};

    int i = 0;
    int j = nums.size() - 1;

    std::vector<int> res{-1,-1};

    while(i < j) { // Why not i <= j ?
        int mid = (i + j)/2;

        if(nums[mid] < target) {
            i = mid + 1;
        } else {
            j = mid;
        }
    }

    if(nums[i] != target) {
        return res;
    }

    res[0] = i;

    j = nums.size() - 1;
    while(i < j) {
        int mid = (i + j)/2 + 1;

        if(nums[mid] <= target) {
            i = mid;
        } else {
            j = mid - 1;
        }
    }

    res[1] = j;

    return res;
}

/*
 * If val is not equivalent to any value in the range, the subrange returned has a length of zero,
 * with both iterators pointing to the nearest value greater than val, if any, or to last, if val
 * compares greater than all the elements in the range.
 *
 * This is why we first need to check if a val exists in the array or not. We do this by using std::binary_search.
 */
std::vector<int> searchRangeSTL(std::vector<int>& nums, int target) {
    if(!std::binary_search(nums.begin(), nums.end(), target)) {
        return {-1, -1};
    }

    auto itPair = std::equal_range(nums.begin(), nums.end(), target);
    int i = std::distance(nums.begin(), itPair.first); // itPair.first - nums.begin() is equivalent.
    int j = std::distance(nums.begin(), itPair.second) - 1; // itPair.second - nums.begin() - 1 is equivalent.
    return {i, j}; // return {static_cast<int>(itPair.first - nums.begin()), static_cast<int>(itPair.second - nums.begin() - 1)}; is equivalent.
                   // Needed static _cast since we cannot narrow long long down to int in initializer list implicitly, so we do it explicitly.
}