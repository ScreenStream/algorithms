#include "binary-search.h"



/*
 * Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
 */

/// We will use modified version of binary search.
/// O(logn) time complexity.
//Observe that in rotated sorted array, we have a larger portion and a smaller portion.
//current_large will represent if the value we are investigating is in larger portion of the array.
//Likewise, target_large will represent if the target value is in larger portion of the array.
//If they are on the same portion we will just implement default binary search. Otherwise, we will try
//to get to the portion that our target is in.

int searchInRotatedSortedArray(vector<int>& nums, int target) {
    if(nums.empty()) {
        return -1;
    }

    int i = 0;
    int j = nums.size() - 1;
    int first = nums[0];

    bool target_large = target >= nums[0];

    while(i <= j) {
        int mid = i + (j - i)/2; /// Mid index found this way to avoid overflow.
        int val = nums[mid];

        if(val == target) {
            return mid;
        }

        bool current_large = val >= first;

        /// Default binary search
        if(current_large == target_large) {
            if(val > target) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        } else { /// Else, we will try to get to the portion that our target is in.
            if(current_large) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
    }

    return -1;
}