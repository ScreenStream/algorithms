#include "dp.h"

/*
 * On a staircase, the i-th step has some non-negative cost cost[i] assigned (0 indexed).

Once you pay the cost, you can either climb one or two steps. You need to find minimum cost to reach the top of the floor, and you can either start from the step with index 0, or the step with index 1.

Example 1:
Input: cost = [10, 15, 20]
Output: 15
Explanation: Cheapest is start on cost[1], pay that cost and go to the top.
Example 2:
Input: cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
Output: 6
Explanation: Cheapest is start on cost[0], and only step on 1s, skipping cost[3].
Note:
cost will have a length in the range [2, 1000].
Every cost[i] will be an integer in the range [0, 999].
 */

int minCostClimbingStairs(std::vector<int>& cost) {
    std::vector<int> dp(cost.size());
    // We infer from the problem statement that the input vector is at least size of 2.
    dp[0] = cost[0];
    dp[1] = cost[1];

    for(int i = 2; i < cost.size(); ++i) {
        dp[i] = std::min(dp[i-1], dp[i-2]) + cost[i];
    }

    return std::min(dp.back(), dp[cost.size() - 2]);
}

/// This solution does not modify input vector.
int minCostClimbingStairs2(std::vector<int>& cost) {
    // We infer from the problem statement that the input vector is at least size of 2.
    int prev2 = cost[0];
    int prev1 = cost[1];
    int cur = 0;

    for(int i = 2; i < cost.size(); ++i) {
        cur = std::min(prev1, prev2) + cost[i];
        prev2 = prev1;
        prev1 = cur;
    }

    return std::min(prev1, prev2);
}

/// This solution DOES modify input vector, however it is way more concise.
int minCostClimbingStairs3(std::vector<int>& cost) {
    for(int i = 2; i < cost.size(); ++i) {
        cost[i] += std::min(cost[i - 1], cost[i - 2]);
    }

    return std::min(cost.back(), cost[cost.size() - 2]);
}

