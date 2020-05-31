#include "maths.h"

/*
 * Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"


Constraints:

Each string consists only of '0' or '1' characters.
1 <= a.length, b.length <= 10^4
Each string is either "0" or doesn't contain any leading zero.
 */

/// Time O(n^2), because of the string concatenation in front.
std::string addBinary(std::string a, std::string b) {
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    std::string res;

    while(i >= 0 || j >= 0 || carry) { /// As long as there is carry, we will keep going on even if we are done iterating strings.
        carry += i >= 0 ? a[i--] - '0' : 0;
        carry += j >= 0 ? b[j--] - '0' : 0;

        res = char(carry % 2 + '0') + res;
        carry /= 2;
    }

    return res;
}