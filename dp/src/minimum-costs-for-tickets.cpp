#include "dp.h"

/*
 * In a country popular for train travel, you have planned some train travelling one year in advance.  The days of the year that you will travel is given as an array days.  Each day is an integer from 1 to 365.

Train tickets are sold in 3 different ways:

a 1-day pass is sold for costs[0] dollars;
a 7-day pass is sold for costs[1] dollars;
a 30-day pass is sold for costs[2] dollars.
The passes allow that many days of consecutive travel.  For example, if we get a 7-day pass on day 2, then we can travel for 7 days: day 2, 3, 4, 5, 6, 7, and 8.

Return the minimum number of dollars you need to travel every day in the given list of days.



Example 1:

Input: days = [1,4,6,7,8,20], costs = [2,7,15]
Output: 11
Explanation:
For example, here is one way to buy passes that lets you travel your travel plan:
On day 1, you bought a 1-day pass for costs[0] = $2, which covered day 1.
On day 3, you bought a 7-day pass for costs[1] = $7, which covered days 3, 4, ..., 9.
On day 20, you bought a 1-day pass for costs[0] = $2, which covered day 20.
In total you spent $11 and covered all the days of your travel.
Example 2:

Input: days = [1,2,3,4,5,6,7,8,9,10,30,31], costs = [2,7,15]
Output: 17
Explanation:
For example, here is one way to buy passes that lets you travel your travel plan:
On day 1, you bought a 30-day pass for costs[2] = $15 which covered days 1, 2, ..., 30.
On day 31, you bought a 1-day pass for costs[0] = $2 which covered day 31.
In total you spent $17 and covered all the days of your travel.


Note:

1 <= days.length <= 365
1 <= days[i] <= 365
days is in strictly increasing order.
costs.length == 3
1 <= costs[i] <= 1000
 */

/// Tracks calendar days v1.
int mincostTickets(std::vector<int>& days, std::vector<int>& costs) {
    std::vector<int> dp(366);
    std::unordered_set<int> travelDays(days.begin(), days.end());

    for(int i = 0; i < dp.size(); ++i) {
        if(!travelDays.count(i)) {
            dp[i] = dp[std::max(0, i - 1)];
        } else {
            dp[i] = std::min({dp[std::max(0, i - 1)] + costs[0],
                              dp[std::max(0, i - 7)] + costs[1],
                              dp[std::max(0, i - 30)] + costs[2]});
        }
    }

    return dp.back();
}

/// Tracks calendar days v2.
/// In the previous solution, we store cost for all calendar days.
/// However, since we only look at most 30 days back, we can just store the cost for last 30 days in a ROLLING array.
/*
 * Time Complexity: O(N), where N is the number of calendar days.
   Space Complexity: O(N) or O(31) for the optimized solution. Stricter, it's a maximum duration among all pass types.
 */
int mincostTickets2(std::vector<int>& days, std::vector<int>& costs) {
    std::vector<int> dp(30);
    std::unordered_set<int> travelDays(days.begin(), days.end());

    for(int i = days.front(); i <= days.back(); ++i) {
        if(!travelDays.count(i)) {
            dp[i % 30] = dp[(i - 1) % 30];
        } else {
            dp[i % 30] = std::min({dp[std::max(0, (i - 1) % 30)] + costs[0],
                                     dp[std::max(0, (i - 7) % 30)] + costs[1],
                                     dp[std::max(0, (i - 30) % 30)] + costs[2]});
        }
    }

    return dp[days.back() % 30];
}

/// Tracks travel days. Most optimal.
/*
 * We track the minimum cost for each travel day. We process only travel days and store {day, cost} for 7-and 30-day passes in the last7 and last30 queues.
 * After a pass 'expires', we remove it from the queue.
 * This way, our queues only contains travel days for the last 7 and 30 days, and the cheapest pass prices are in the front of the queues.
 */
/*
 * Time Complexity: O(n), where n is the number of travel days.
   Space Complexity: O(38). Stricter, it's a sum of duration for all pass types (1 + 7 + 30 in our case).
 */
int mincostTickets3(std::vector<int>& days, std::vector<int>& costs) {
    // day-cost pairs.
    std::queue<std::pair<int, int>> last7;
    std::queue<std::pair<int, int>> last30;
    int cost = 0;

    for(auto day : days) {
        while(!last7.empty() && last7.front().first + 7 <= day) {
            last7.pop();
        }

        while(!last30.empty() && last30.front().first + 30 <= day) {
            last30.pop();
        }

        last7.push({day, cost + costs[1]});
        last30.push({day, cost + costs[2]});

        cost = std::min({cost + costs[0], last7.front().second, last30.front().second});
    }

    return cost;
}