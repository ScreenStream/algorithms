#include "str.h"

/// GOOGLE OA
/// https://leetcode.com/discuss/interview-question/553399/

/*
 * Given a string S, we can split S into 2 strings: S1 and S2. Return the number of ways S can be split
 * such that the number of unique characters between S1 and S2 are the same.

Example 1:

Input: "aaaa"
Output: 3
Explanation: we can get a - aaa, aa - aa, aaa- a
Example 2:

Input: "bac"
Output: 0
Example 3:

Input: "ababa"
Output: 2
Explanation: ab - aba, aba - ba
 */

int numOfSplit(string s) {
    return 0;
}


/*
 *     private static int splitStringUniqueChars(String s) {
        HashMap<Character, Integer> left = new HashMap<>();
        HashMap<Character, Integer> right = new HashMap<>();
        int ans = 0;
        for(char c : input.toCharArray()) right.put(c, right.getOrDefault(c, 0) + 1);
        for(char c : input.toCharArray()) {
            // Move character from right to left
            right.put(c, right.getOrDefault(c, 0) - 1);
            left.put(c, left.getOrDefault(c, 0) + 1);
            if(right.get(c) == 0) right.remove(c);
            // Compare unique characters
            if(right.keySet().equals(left.keySet())) ans++;
        }
        return ans;
    }
 */