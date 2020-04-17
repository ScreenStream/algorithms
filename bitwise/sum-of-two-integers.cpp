#include "bitwise.h"

/*
 * Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.

Example 1:

Input: a = 1, b = 2
Output: 3
Example 2:

Input: a = -2, b = 3
Output: 1
 */

/// Solutions below work because, XOR is the operation of adding without the carry. AND calculates the carry.
/// Result of the AND operations is SHIFTED TO RIGHT so that carry would be taken into consideration.

/// Iterative.
int getSum(int a, int b) {
    int sum = a;

    while (b != 0)
    {
        sum = a ^ b;//calculate sum of a and b without thinking the carry
        b = (unsigned int)(a & b) << 1;//calculate the carry
        a = sum;//add sum(without carry) and carry
    }

    return sum;
}

/// Recursive
int getSum1(int a, int b) {
    return b == 0 ? a : getSum(a^b, (unsigned int)(a & b) << 1);
}