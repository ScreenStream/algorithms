#include "backtracking/backtracking.h"



/*
 * Given a set of candidate numbers (candidates) (without duplicates) and a target number (target), find all unique combinations
 * in candidates where the candidate numbers sums to target.

The same repeated number may be chosen from candidates unlimited number of times.

Note:

All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
Example 1:

Input: candidates = [2,3,6,7], target = 7,
A solution set is:
[
  [7],
  [2,2,3]
]
Example 2:

Input: candidates = [2,3,5], target = 8,
A solution set is:
[
  [2,2,2,2],
  [2,3,3],
  [3,5]
]
 */

void helper(vector<int>& temp, vector<vector<int>>& res, const int& accumulatedSum, int start, const vector<int>& candidates, const int target)
{
    if(accumulatedSum == target) {
        res.push_back(temp);
        return;
    }

    for(int i = start; i < candidates.size(); ++i) {
        if(accumulatedSum + candidates[i] > target) {
            continue;
        }

        temp.push_back(candidates[i]);
        /// Here, we do not input helper method with i + 1 as start index, since the exact same element can be used again in the next step.
        /// For example if the target were to be 7, [2,2,3] would be a valid option, as you can see 2 has been used here twice.
        helper(temp, res, accumulatedSum + candidates[i], i, candidates, target);
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> res;
    vector<int> temp;
    int accumulatedSum = 0;
    int start = 0;
    helper(temp, res, accumulatedSum, start, candidates, target);
    return res;
}