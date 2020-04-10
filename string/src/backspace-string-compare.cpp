#include "str.h"

/*
 * Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
Example 3:

Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".
Example 4:

Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".
Note:

1 <= S.length <= 200
1 <= T.length <= 200
S and T only contain lowercase letters and '#' characters.
 */

/// O(M+N) space. O(M+N) time.
bool backspaceCompare(std::string S, std::string T) {
    std::string s;
    for(auto ch : S) {
        if(ch == '#') {
            if(!s.empty()) {
                s.pop_back();
            }
            continue;
        }
        s += ch;
    }

    std::string t;
    for(auto ch : T) {
        if(ch == '#') {
            if(!t.empty()) {
                t.pop_back();
            }
            continue;
        }
        t += ch;
    }

    return s == t;
}

/// O(1) space. O(M+N) time.
bool backspaceCompare2(std::string S, std::string T) {
    int i = S.size() - 1;
    int j = T.size() - 1;

    int skipS = 0;
    int skipT = 0;

    while(i >= 0 || j >= 0) {
        while(i >= 0) {
            if(S[i] == '#') {
                ++skipS;
                --i;
            } else if(skipS > 0) {
                --skipS;
                --i;
            } else {
                break;
            }
        }

        while(j >= 0) {
            if(T[j] == '#') {
                ++skipT;
                --j;
            } else if(skipT > 0) {
                --skipT;
                --j;
            } else {
                break;
            }
        }

        if(i >= 0 && j >= 0 && S[i] != T[j]) {
            return false;
        }

        /// If expecting to compare char vs nothing. This covers an edge case like the time when we compare
        /// abc##### to abcdef##, this case is covered by this if block below.
        if((i >= 0) != (j >= 0)) {
            return false;
        }

        --i;
        --j;
    }

    return true;
}