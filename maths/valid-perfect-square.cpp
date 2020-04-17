#include "maths.h"

/*
 * Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Output: true
Example 2:

Input: 14
Output: false
 */

/// A square number is 1+3+5+7+...
/// Time complexity is O(sqrt(n))
bool isPerfectSquare(int num) {
    int i = 1;

    while(num > 0) {
        num -= i;
        i += 2;
    }

    return num == 0;
}

/// Another solution
bool isPerfectSquare1(int num) {
    if(num == 1) {
        return true;
    }

    /// Long is used to avoid overflow in i*i. Normally, it would have been sufficient to check until sqrt(num).
    /// But since we cannot use sqrt function, I have used num/2.
    /// O(n/2) --> O(n) time.
    for(long i = 0; i <= num/2; ++i) {
        if(i*i == num) {
            return true;
        }
    }

    return false;
}

/// Binary search --> O(log(n)) time complexity.
bool isPerfectSquare2(int num) {
    int l = 0;
    int r = num;

    while(l <= r) {
        long mid = l + (r - l)/2;

        if(mid * mid == num) {
            return true;
        } else if(mid * mid < num) {
            l = mid + 1;
        } else if(mid * mid > num) {
            r = mid - 1;
        }
    }

    return false;
}