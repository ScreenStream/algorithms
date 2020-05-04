#include "bitwise.h"

/*
 * Given two integers dividend and divisor, divide two integers without using multiplication, division and mod operator.

Return the quotient after dividing dividend by divisor.

The integer division should truncate toward zero, which means losing its fractional part. For example, truncate(8.345) = 8 and truncate(-2.7335) = -2.

Example 1:

Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = truncate(3.33333..) = 3.
Example 2:

Input: dividend = 7, divisor = -3
Output: -2
Explanation: 7/-3 = truncate(-2.33333..) = -2.
Note:

Both dividend and divisor will be 32-bit signed integers.
The divisor will never be 0.
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1].
 For the purpose of this problem, assume that your function returns 231 − 1 when the division result overflows.
 */

int divide(int dividend, int divisor) {
//    if(dividend == INT_MIN && divisor == -1) {
//        return INT_MAX;
//    }
//
//    long dvd = labs(dividend);
//    long dvs = labs(divisor);
//    int sign = (dividend > 0) ^ (divisor > 0) ? -1 : 1;
//    /// If both dividend and divisor are bigger than zero or if both dividend and divisor
//    /// are less than zero sign will be positive. XOR is useful to handle this case.
//
//    int res = 0;
//    while(dvd - dvs >= 0) {
//        dvd -= dvs;
//        ++res;
//    }
//
//    return sign * res;
//    if(dividend == INT_MIN && divisor == -1) {
//        return INT_MAX;
//    }
//
//    long dvd = labs(dividend);
//    long dvs = labs(divisor);
//    long ans = 0;
//    int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
//
//    while(dvd >= dvs) {
//        long temp = dvs;
//        long m = 1;
//
//        while(temp << 1 <= dvd) {
//            temp <<= 1;
//            m <<= 1;
//        }
//
//        dvd -= temp;
//        ans += m;
//    }
//
//
//    return sign * ans;
    return 0;
}