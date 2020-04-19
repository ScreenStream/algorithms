#include "str.h"

/*
 * Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example 1:

Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:

Input: "cbbd"
Output: "bb"
 */

void extend(const std::string& s, int i, int j, int& pos, int& maxLen)
{
    /// Iterate until we no longer satisfy palindrome property.
    while(i >= 0 && j < s.size() && s[i] == s[j]) {
        --i;
        ++j;
    }

    /// Go back one step back and right index and one step further on left index to satisfy palindrome property again.
    ++i;
    --j;

    if(maxLen < j - i + 1) {
        maxLen = j - i + 1;
        pos = i;
    }
}

/// Optimal solution. Time complexity O(N^2) in the worst case.
std::string longestPalindrome(std::string s) {
    if(s.size() < 2)
        return s;

    int pos = 0;
    int maxLen = 0;

    for(int i = 0; i < s.size() - 1; ++i) {
        extend(s, i, i, pos, maxLen); /// Assume ODD length, try to extend palindrome as much as possible.
        extend(s, i, i + 1, pos, maxLen); /// Assume EVEN length, try to extend palindrome as much as possible.
    }

    return s.substr(pos, maxLen);
}

/// DP approach.
/*
 * dp(i, j) represents whether s(i ... j) can form a palindromic substring, dp(i, j) is true when s(i) equals to s(j) and s(i+1 ... j-1) is
 * a palindromic substring. When we found a palindrome, check if it's the longest one. Time complexity O(n^2).
 */
/// Slow.
std::string longestPalindrome1(std::string s) {
    if(s.size() < 2)
        return s;

    std::vector<std::vector<bool>> dp(s.size(), std::vector<bool>(s.size()));
    std::string res;

    for(int i = s.size() - 1; i >= 0; --i) {
        for(int j = i; j < s.size(); ++j) {
            dp[i][j] = (s[i] == s[j]) && (j - i < 3 || dp[i + 1][j - 1]);

            if(dp[i][j] && j - i + 1 > res.size()) {
                res = s.substr(i, j - i + 1);
            }
        }
    }

    return res;
}


