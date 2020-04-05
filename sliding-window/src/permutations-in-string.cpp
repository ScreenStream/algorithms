#include "sliding-window.h"

#include <vector>

/*
 * Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first string's permutations is the substring of the second string.

Example 1:

Input: s1 = "ab" s2 = "eidbaooo"
Output: True
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input:s1= "ab" s2 = "eidboaoo"
Output: False
 */

bool checkInclusion(const std::string &s1, const std::string &s2)
{
    std::vector<int> chars(256);

    for(auto ch : s1) {
        chars[ch]++;
    }

    int l = 0;
    int r = 0;
    int needToFindCount = s1.size();

    while(r < s2.size()) {
        if(chars[s2[r]] >= 1) {
            --needToFindCount;
        }

        --chars[s2[r]];
        ++r;

        if(needToFindCount == 0)
            return true;

        if(r - l == s1.size()) {
            if(chars[s2[l]] >= 0) {
                ++needToFindCount;
            }

            chars[s2[l]]++;
            ++l;
        }
    }

    return false;
}
