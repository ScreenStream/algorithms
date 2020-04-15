#include "dp.h"

/*
 * You are given coins of different denominations and a total amount of money amount. Write a function to compute the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

Example 1:

Input: coins = [1, 2, 5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
Example 2:

Input: coins = [2], amount = 3
Output: -1
Note:
You may assume that you have an infinite number of each kind of coin.
 */

/// At first, a greedy approach may seem to work for this question. Even though for some cases it gets us a fast result, in many cases greedy approach would not work.
/// Because there is no guarantee that picking the largest possible coin every time will lead us to the correct answer.
/// For example if we had coins 1, 30, 32 and we had to make them up to 90, it would be optimal to choose 3 coins of 30. But greedy solution would not suggest this.

int coinChange(std::vector<int>& coins, int amount) {
    /// We are initializing array with amount+1. We just needed to set it something bigger than amount, since even in the worst case we would need "amount" times
    /// of 1 dollar coins. So, even for the worst case it is not possible to reach "amount+1" amount of coins.
    std::vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;

    for(int i = 1; i < dp.size(); ++i) {
        for(auto coin : coins) {
            if(i >= coin) {
                dp[i] = std::min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return dp[amount] > amount ? -1 : dp[amount];
}