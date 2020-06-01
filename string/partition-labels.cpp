#include "str.h"

/*
 * A string S of lowercase letters is given. We want to partition this string into as many parts as possible so that each letter
 * appears in at most one part, and return a list of integers representing the size of these parts.

Example 1:
Input: S = "ababcbacadefegdehijhklij"
Output: [9,7,8]
Explanation:
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits S into less parts.
Note:

S will have length in range [1, 500].
S will consist of lowercase letters ('a' to 'z') only.
 */

std::vector<int> partitionLabels(std::string S) {
    std::vector<int> lastIndexes(26);
    std::vector<int> res;

    for(int i = 0; i < S.size(); ++i) {
        lastIndexes[S[i] - 'a'] = i;
    }

    int ind = 0;
    int maxInd = INT_MIN;

    for(int i = 0; i < S.size(); ++i) {
        maxInd = std::max(maxInd, lastIndexes[S[i] - 'a']);

        if(maxInd == i) {
            res.push_back(maxInd - ind + 1);
            ind = i + 1;
        }
    }

    return res;
}