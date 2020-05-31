#include "backtracking/backtracking.h"

using namespace std;

/*
 * Given a collection of integers that MIGHT CONTAIN DUPLICATES, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

Example:

Input: [1,2,2]
Output:
[
  [2],
  [1],
  [1,2,2],
  [2,2],
  [1,2],
  []
]
 */

void helper(vector<int>& temp, vector<vector<int>>& res, const vector<int>& nums, int start)
{
    res.push_back(temp);

    for(int i = start; i < nums.size(); ++i) {
        if(i > start && nums[i] == nums[i-1]) continue;

        temp.push_back(nums[i]);
        helper(temp, res, nums, i + 1);
        temp.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> res;
    vector<int> temp;
    sort(nums.begin(), nums.end()); /// Sorting beforehand is useful to solve questions that deals with duplicates.
    helper(temp, res, nums, 0);
    return res;
}