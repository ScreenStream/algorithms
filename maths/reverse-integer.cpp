#include "maths.h"

/*
 * Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21

Input: -2147483648
Output: 0 (Because max number that can be represented by 32-bit integer is 2147483647.)

Note:
 Assume we are dealing with an environment which could only store
 integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem,
 assume that your function returns 0 when the reversed integer overflows.
 */

int reverse(int x) {
    if(x == INT_MIN)
        return 0;

    int sign = x < 0 ? -1 : 1;

    if(x < 0)
        x = std::abs(x);

    int res = 0;
    while(x) {
        if(INT_MAX / 10 < res || (INT_MAX - x % 10) < res * 10) {
            return 0;
        }

        res = res * 10 + x % 10;
        x /= 10;
    }

    return sign * res;
}

