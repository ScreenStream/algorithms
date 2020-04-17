#include "maths.h"

/// Note that you can use std::lcm and std::gcd since C++17.

/*
 * gcd(60, 36)
 *
 * 60 36
 * 36 24
 * 24 12
 * 12 0 --> b == 0, return 12.
 *
 *  */

/// Euclid's algorithm below.
/// gcd(a, 0) = a
/// gcd(a, b) = gcd(b, a mod b)
int gcd(int a, int b)
{
    if(b == 0) {
        return a;
    } else {
        return gcd(b, a%b);
    }
}

/*
 *          a * b == gcd(a * b) * lcm(a * b)
 */
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

