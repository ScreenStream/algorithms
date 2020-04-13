#include "maths.h"

/*
 * Count the number of prime numbers less than a non-negative number, n.

Example:

Input: 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
 */

/// https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
int countPrimes(int n) {
    int res = 0;
    std::vector<bool> notPrimes(n, false);

    for(int i = 2; i < n; ++i) { /// We start with 2, since it is the smallest prime.
        if(!notPrimes[i]) {
            ++res;
            for(int j = 2; i*j < n; ++j) { /// We will mark multiples of the number as not prime, that is why we start with 2 here (multiplies!).
                notPrimes[i*j] = true;
            }
        }
    }

    return res;
}
