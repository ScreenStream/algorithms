#include "backtracking/backtracking.h"



/*
 * Given a collection of distinct integers, return all possible permutations.

Example:

Input: [1,2,3]
Output:
[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
]
 */

void helper(vector<int>& temp, vector<vector<int>>& res, vector<int>& nums)
{
    if(temp.size() == nums.size()) {
        res.push_back(temp);
        return;
    }

    for(int i = 0; i < nums.size(); ++i) {
        if(find(temp.begin(), temp.end(), nums[i]) != temp.end()) { /// Trick is here.
        /// If the current value we are iterating over is already in the candidate vector,
        /// we cannot further derive a permutation out of the same value so we just skip this iteration.
            continue;
        }

        temp.push_back(nums[i]);
        helper(temp, res, nums);
        temp.pop_back();
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    vector<int> temp;
    helper(temp, res, nums); /// Note that we did not need a start index like we do in most of backtracking questions.
                                      /// Because it is obvious that our starting index will always be 0. We will do a full exploration each time.
    return res;
}