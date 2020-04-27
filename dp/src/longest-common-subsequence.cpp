#include "dp.h"

using namespace std;

/*
 *Given two strings text1 and text2, return the length of their longest common subsequence.

A subsequence of a string is a new string generated from the original string with some characters(can be none) deleted without
 changing the relative order of the remaining characters. (eg, "ace" is a subsequence of "abcde" while "aec" is not).
 A common subsequence of two strings is a subsequence that is common to both strings.



If there is no common subsequence, return 0.



Example 1:

Input: text1 = "abcde", text2 = "ace"
Output: 3
Explanation: The longest common subsequence is "ace" and its length is 3.
Example 2:

Input: text1 = "abc", text2 = "abc"
Output: 3
Explanation: The longest common subsequence is "abc" and its length is 3.
Example 3:

Input: text1 = "abc", text2 = "def"
Output: 0
Explanation: There is no such common subsequence, so the result is 0.


Constraints:

1 <= text1.length <= 1000
1 <= text2.length <= 1000
The input strings consist of lowercase English characters only.
 */

/// Runtime: O(nm), where n and m are the string sizes.
// Memory: O(nm).
int longestCommonSubsequence(string text1, string text2) {
    vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1));

    for(int i = 1; i < dp.size(); ++i) {
        for(int j = 1; j < dp[0].size(); ++j) {
            if(text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = std::max(dp[i][j - 1], dp[i - 1][j]); /// If current characters do not match, we truncate one string and check,
                                                                 /// and do the same stuff by truncating JUST the other string and checking the
                                                                 /// longest subsequence. We accept max of them.
            }
        }
    }

    return dp.back().back();
}

/// Memory optimized version:
/// You may notice that we are only looking one row up in the solution above. So, we just need to store two rows.
/// Runtime: O(nm), where n and m are the string sizes.
/// Memory: O(min(n,m)).
int longestCommonSubsequence2(string &a, string &b) {
    vector<vector<int>> dp(2, vector<int>(b.size() + 1));

    for (int i = 1; i <= a.size(); ++i) {
        for (int j = 1; j <= b.size(); ++j) {
            if (a[i - 1] == b[j - 1]) {
                dp[i % 2][j] = dp[(i - 1) % 2][j - 1] + 1;
            } else {
                dp[i % 2][j] = max(dp[(i - 1) % 2][j], dp[i % 2][j - 1]);
            }
        }
    }

    return dp[a.size() % 2][b.size()];
}