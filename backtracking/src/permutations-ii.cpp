#include "backtracking.h"

using namespace std;

/*
 *Given a collection of numbers that MIGHT CONTAIN DUPLICATES, return all possible unique permutations.

Example:

Input: [1,1,2]
Output:
[
  [1,1,2],
  [1,2,1],
  [2,1,1]
]
 */

void helper(vector<int>& temp, vector<vector<int>>& res, vector<bool>& used, vector<int>& nums)
{
    if(temp.size() == nums.size()) {
        res.push_back(temp);
        return;
    }

    for(int i = 0; i < nums.size(); ++i) {
        if(used[i]) {
            continue;
        }
        if(i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
        /// This is the tricky part. If the number with the same value at the previous index has not been used, this number
        /// is not supposed to be used as well.
            continue;
        }

        used[i] = true;
        temp.push_back(nums[i]);

        helper(temp, res, used, nums);

        temp.pop_back();
        used[i] = false;
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> res;
    vector<int> temp;
    sort(nums.begin(), nums.end());
    vector<bool> used(nums.size(), false);
    helper(temp, res, used, nums);
    return res;
}