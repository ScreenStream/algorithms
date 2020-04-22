#include "arr.h"

using namespace std;

/*
 * Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.

Example 1:
Input:nums = [1,1,1], k = 2
Output: 2
Note:
The length of the array is in range [1, 20,000].
The range of numbers in the array is [-1000, 1000] and the range of the integer k is [-1e7, 1e7].
 */

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixCounter;
    prefixCounter[0] = 1; /// to take into account those subarrays that begin with index 0

    int res = 0;
    int sum = 0;
    for(int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        res += prefixCounter[sum - k];
        prefixCounter[sum]++; /// It is important that this line comes before the above line. Otherwise, it would yield wrong answer when k is 0.
    }

    return res;
}