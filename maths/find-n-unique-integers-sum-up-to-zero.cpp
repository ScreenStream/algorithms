#include "maths.h"

using namespace std;

/*
 * Given an integer n, return any array containing n unique integers such that they add up to 0.

Example 1:

Input: n = 5
Output: [-7,-1,1,3,4]
Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].
Example 2:

Input: n = 3
Output: [-1,0,1]
Example 3:

Input: n = 1
Output: [0]


Constraints:

1 <= n <= 1000
 */

vector<int> sumZero(int n) {
    vector<int> res;

    if(n % 2 != 0) {
        res.push_back(0);
    }

    int i = 1;

    int a = n/2;
    while(a-- > 0) {
        res.push_back(i);
        res.push_back(-i);
        ++i;
    }

    return res;
}

/// More sophisticated version, by detecting a pattern.
/*
 * Intuition
Naive idea
n = 1, [0]
n = 2, [-1, 1]

Now write more based on this
n = 3, [-2, 0, 2]
n = 4, [-3, -1, 1, 3]
n = 5, [-4, -2, 0, 2, 4]

It spreads like the wave.


Explanation
Find the rule
 A[i] = i * 2 - n + 1
 */
vector<int> sumZero1(int n) {
    vector<int> res(n);

    for(int i = 0; i < n; ++i) {
        res[i] = i * 2 - n + 1;
    }

    return res;
}