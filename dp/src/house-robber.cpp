#include "dp.h"

/*
 * You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

Example 1:

Input: [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
             Total amount you can rob = 1 + 3 = 4.
Example 2:

Input: [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
             Total amount you can rob = 2 + 9 + 1 = 12.
 */


///
/*
 * There is some frustration when people publish their perfect fine-grained algorithms without sharing any information abut how they were derived. This is an attempt to change the situation. There is not much more explanation but it's rather an example of higher level improvements. Converting a solution to the next step shouldn't be as hard as attempting to come up with perfect algorithm at first attempt.

This particular problem and most of others can be approached using the following sequence:

Find recursive relation
Recursive (top-down)
Recursive + memo (top-down)
Iterative + memo (bottom-up)
Iterative + N variables (bottom-up)

 /// NOTE THAT THERE IS NO "ONLY ITERATIVE".

Step 1. Figure out recursive relation.
A robber has 2 options: a) rob current house i; b) don't rob current house.
If an option "a" is selected it means she can't rob previous i-1 house but can safely proceed to the one before previous i-2 and gets all cumulative loot that follows.
If an option "b" is selected the robber gets all the possible loot from robbery of i-1 and all the following buildings.
So it boils down to calculating what is more profitable:

robbery of current house + loot from houses before the previous
loot from the previous house robbery and any loot captured before that
rob(i) = Math.max( rob(i - 2) + currentHouseValue, rob(i - 1) )
 */

int robRecursiveHelper(std::vector<int>& nums, int i, std::vector<int>& dp)
{
    if(i < 0) {
        return 0;
    }

    if(dp[i] >= 0) {
        return dp[i];
    }

    dp[i] = std::max(nums[i] + robRecursiveHelper(nums, i - 2, dp), robRecursiveHelper(nums, i - 1, dp));
    return dp[i];
}

int robRecursive(std::vector<int>& nums) {
    std::vector<int> dp(nums.size(), -1);
    return robRecursiveHelper(nums, nums.size() - 1, dp);
}

/// Iterative solution is better since it avoids stack overflow risk of recursive solution.
int robIterative(std::vector<int>& nums) {
    if(nums.empty()) {
        return 0;
    }

    std::vector<int> dp(nums.size() + 1);
    dp[0] = 0;
    dp[1] = nums[0];

    for(int i = 1; i < nums.size(); ++i) {
        dp[i + 1] = std::max(nums[i] + dp[i - 1], dp[i]);
    }

    return dp.back();
}

/*
 * We can notice that in robIterative we use only dp[i] and dp[i-1], so we are just going 2 steps back.
 * We can hold them in 2 variables instead. This optimization is met in Fibonacci sequence creation and some other problems.
 * This is the most optimal solution --> O(1) space, O(n) time.
 */
int robIterativeWithVariables(std::vector<int>& nums) {
    if(nums.empty()) {
        return 0;
    }

    int prev1 = 0;
    int prev2 = 0;

    for(auto num : nums) {
        int tmp = prev1;
        prev1 = std::max(prev1, num + prev2);
        prev2 = tmp;
    }

    return prev1;
}

