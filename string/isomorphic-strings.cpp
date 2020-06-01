#include "str.h"

/*
 * Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false
Example 3:

Input: s = "paper", t = "title"
Output: true
 */

bool isIsomorphic(std::string s, std::string t) {
    if(s.size() != t.size())
        return false;

    std::vector<int> sMap(256, -1);
    std::vector<int> tMap(256, -1);

    for(int i = 0; i < s.size(); ++i) {
        if(sMap[s[i]] != tMap[t[i]])
            return false;

        sMap[s[i]] = i;
        tMap[t[i]] = i;
    }

    return true;
}