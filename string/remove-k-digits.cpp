#include "str.h"



/*
 * Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest possible.

Note:
The length of num is less than 10002 and will be ≥ k.
The given num does not contain any leading zero.
Example 1:

Input: num = "1432219", k = 3
Output: "1219"
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
Example 2:

Input: num = "10200", k = 1
Output: "200"
Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.
Example 3:

Input: num = "10", k = 2
Output: "0"
Explanation: Remove all the digits from the number and it is left with nothing which is 0.
 */

/// How to remove 1 digit from the number so that the new number is the smallest possible？ Well, one can simply scan from left to right,
/// AND REMOVE THE FIRST PEAK DIGIT. One can repeat this procedure k times.

/// The below algorithm is a bit inefficient because it frequently remove a particular element from a string and has time complexity of O(k*n).
string removeKdigits(string num, int k) {
    int n = num.size();

    if(k >= n) {
        return "0";
    }

    while(k--) {
        int i = 0;
        while(i + 1 < n && num[i] <= num[i + 1]) {
            ++i;
        }

        num.erase(i, 1);
    }

    int i = 0;
    while(i < n - 1 && num[i] == '0') {
        ++i;
    }

    num.erase(0, i);

    return num == "" ? "0" : num;
}

/// O(n) time complexity, O(n) space.
string removeKdigits2(string num, int k) {
    int n = num.size();

    if(k >= n) {
        return "0";
    }

    int new_str_size = num.size() - k;
    string res;
    for(int i = 0; i < n; ++i) {
        while(!res.empty() && res.back() > num[i] && k > 0) {
            res.pop_back();
            --k;
        }

        res.push_back(num[i]);
    }

    res.erase(new_str_size);

    int i = 0;
    while(i < n - 1 && res[i] == '0') {
        ++i;
    }

    res.erase(0, i);

    return res=="" ? "0" : res;
}