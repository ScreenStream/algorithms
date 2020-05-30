#include "dp.h"

/*
 * A message containing letters from A-Z is being encoded to numbers using the following mapping:

'A' -> 1
'B' -> 2
...
'Z' -> 26
Given a non-empty string containing only digits, determine the total number of ways to decode it.

Example 1:

Input: "12"
Output: 2
Explanation: It could be decoded as "AB" (1 2) or "L" (12).
Example 2:

Input: "226"
Output: 3
Explanation: It could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
 */

int numDecodings(std::string s) {
    if(s.empty()) {
        return 0;
    }

    std::vector<int> dp(s.size() + 1);

    /// "Nothing" can be decoded only one way.
    /// If that does not make sense, observe that we set dp[0] value to 1; this way we can find dp[2] properly.
    /// So, always check if the value you set for dp[0] makes sense for dp[2].
    dp[0] = 1;

    /// We are handling the initial case.
    dp[1] = s[0] == '0' ? 0 : 1;

    for(int i = 2; i < dp.size(); ++i) {
        int curr = std::stoi(s.substr(i - 1, 1));
        int prevWithCurr = std::stoi(s.substr(i - 2, 2));

        if(curr != 0) {
            dp[i] += dp[i - 1];
        }

        if(prevWithCurr >= 10 && prevWithCurr <= 26) {
            dp[i] += dp[i - 2];
        }
    }

    return dp.back();
}

