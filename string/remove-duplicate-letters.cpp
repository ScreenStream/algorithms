#include "str.h"

/*
 * Given a string which contains only lowercase letters, remove duplicate letters so that every letter appears once and only once.
 * You must make sure your result is the smallest in lexicographical order among all possible results.

Example 1:

Input: "bcabc"
Output: "abc"
Example 2:

Input: "cbacdcbc"
Output: "acdb"
 */

std::string removeDuplicateLetters(std::string s) {
    std::string res;
    std::vector<int> last(26);
    std::vector<bool> seen(26);

    for(int i = 0; i < s.size(); ++i) {
        last[s[i] - 'a'] = i;
    }

    for(int i = 0; i < s.size(); ++i) {
        if(seen[s[i] - 'a']) {
            continue;
        }

        seen[s[i] - 'a'] = true;

        /// This is the key part.
        while(!res.empty() && res.back() > s[i] && last[res.back() - 'a'] > i) {
            seen[res.back() - 'a'] = false;
            res.pop_back();
        }

        res.push_back(s[i]);
    }

    return res;
}
