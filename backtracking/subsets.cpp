#include "backtracking/backtracking.h"



/*
 * Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

Example:

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]
 */

void helper(vector<int>& temp, vector<vector<int>>& res, const vector<int>& nums, int start)
{
    res.push_back(temp); /// We do not need to prune solution space like we do in most of the backtracking questions
                         /// (with if else at the top of the helper function to end recursion with return statement).
                         /// We want to explore all of the solution space.

    for(int i = start; i < nums.size(); ++i) {
        temp.push_back(nums[i]);
        helper(temp, res, nums, i + 1);
        temp.pop_back();
    }
}

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> res;
    vector<int> temp;
    helper(temp, res, nums, 0);
    return res;
}

