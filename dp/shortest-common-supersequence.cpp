#include "dp.h"



/*
 * Given two strings str1 and str2, return the shortest string that has both str1 and str2 as subsequences.
 * If multiple answers exist, you may return any of them.

(A string S is a subsequence of string T if deleting some number of characters from T (possibly 0, and the characters are
 chosen anywhere from T) results in the string S.)



Example 1:

Input: str1 = "abac", str2 = "cab"
Output: "cabac"
Explanation:
str1 = "abac" is a subsequence of "cabac" because we can delete the first "c".
str2 = "cab" is a subsequence of "cabac" because we can delete the last "ac".
The answer provided is the shortest such string that satisfies these properties.


Note:

1 <= str1.length, str2.length <= 1000
str1 and str2 consist of lowercase English letters.
 */

string lcs(string& A, string& B) { /// Longest common subsequence.
    int n = A.size();
    int m = B.size();
    vector<vector<string>> dp(n + 1, vector<string>(m + 1, ""));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (A[i] == B[j])
                dp[i + 1][j + 1] = dp[i][j] + A[i];
            else
                dp[i + 1][j + 1] = dp[i + 1][j].size() > dp[i][j + 1].size() ?  dp[i + 1][j] : dp[i][j + 1];
    return dp[n][m];
}

string shortestCommonSupersequence(string& A, string& B) {
    int i = 0, j = 0;
    string res = "";
    for (char c : lcs(A, B)) {
        while (A[i] != c)
            res += A[i++];
        while (B[j] != c)
            res += B[j++];
        res += c, i++, j++;
    }
    return res + A.substr(i) + B.substr(j);
}