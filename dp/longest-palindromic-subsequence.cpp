#include "dp.h"

using namespace std;

/*
 * Given a string s, find the longest palindromic subsequence's length in s. You may assume that the maximum length of s is 1000.

Example 1:
Input:

"bbbab"
Output:
4
One possible longest palindromic subsequence is "bbbb".
Example 2:
Input:

"cbbd"
Output:
2
One possible longest palindromic subsequence is "bb".
 */

int longestPalindromeSubseq(string s) {
    vector<vector<int>> dp(s.size(), vector<int>(s.size()));

    for(int i = dp.size() - 1; i >= 0; --i) { /// It is important to iterate through the rows from the bottom.
                                              /// dp matrix is being constructed from the bottom. If we were
                                              /// to start from the top, dp[i + 1] values would not have been calculated yet,
                                              /// which is needed for calculating dp[i] values.
        dp[i][i] = 1;

        for(int j = i + 1; j < dp[0].size(); ++j) {
            if(s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            } else {
                dp[i][j] = std::max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp.front().back();
}