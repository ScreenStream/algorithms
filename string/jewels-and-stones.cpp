#include "str.h"

using namespace std;

/*
 * You're given strings J representing the types of stones that are jewels, and S representing the stones you have.
 * Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different
 type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:

Input: J = "z", S = "ZZ"
Output: 0
Note:

S and J will consist of letters and have length at most 50.
The characters in J are distinct.
 */

/// Time O(J + S), Space O(J)
int numJewelsInStones(string J, string S) {
    /// Using set to search from jewels decreased time complexity from O(JS) to O(J + S).
    /// O(J) is for building the set, O(S) is searching for the stone.
    unordered_set<char> jewels(J.begin(), J.end());

    int res = 0;
    for(auto stone : S) {
        if(jewels.count(stone)) {
            ++res;
        }
    }

    return res;
}