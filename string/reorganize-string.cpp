#include <iostream>
#include "str.h"

/*
 * Given a string S, check if the letters can be rearranged so that two characters that are adjacent to each other are not the same.

If possible, output any possible result.  If not possible, return the empty string.

Example 1:

Input: S = "aab"
Output: "aba"
Example 2:

Input: S = "aaab"
Output: ""
Note:

S will consist of lowercase letters and have length in range [1, 500].
 */

/// Greedy approach.
std::string reorganizeString(std::string S) {
    std::vector<int> charmap(26);
    char freqchar;
    int maxfreq = 0;

    for(auto ch : S) {
        charmap[ch - 'a']++;
        if(charmap[ch - 'a'] > maxfreq) {
            maxfreq = charmap[ch - 'a'];
            freqchar = ch;
        }
    }

    if(maxfreq > (S.size()+1)/2) {
        return {};
    }

    int i = 0;
    while(charmap[freqchar - 'a'] > 0) {
        S[i] = freqchar;
        i=i+2;
        charmap[freqchar - 'a']--;
    }

    for(int j = 0; j < charmap.size(); ++j) {
        while(charmap[j]) {
            if(i >= S.size())
                i = 1;

            S[i] = ('a' + j);
            charmap[j]--;
            i += 2;
        }
    }

    return S;
}