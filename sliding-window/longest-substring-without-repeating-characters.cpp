#include "sliding-window.h"

/*
 * Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
 */

/// Optimal solution.
int lengthOfLongestSubstring(const string& s)
{
    if(s.empty())
        return 0;

    vector<int> indices(256, -1);
    int maxLen = INT_MIN;
    int start = -1;

    for(int i = 0; i < s.size(); ++i) {
        if(indices[s[i]] > start) {

            start = indices[s[i]];
        }

        maxLen = max(maxLen, i - start);
        indices[s[i]] = i;
    }

    return maxLen;
}

/// Sliding window approach. Wise to use set, since we are looking for the length of UNIQUE set of numbers in a range.
int lengthOfLongestSubstring1(const string& s)
{
    if(s.empty())
        return 0;

    unordered_set<int> chars;
    int maxLen = INT_MIN;

    int i = 0;
    int j = 0;

    while(j < s.size()) {
        while(chars.count(s[j])) {
            chars.erase(s[i++]);
        }

        chars.insert(s[j++]);
        maxLen = max(maxLen, j - i);
    }

    return maxLen;
}

