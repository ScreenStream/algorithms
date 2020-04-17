#include "arr.h"

/*
 * Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the
 * five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

For example, . Our minimum sum is  and our maximum sum is . We would print

16 24
Function Description

Complete the miniMaxSum function in the editor below. It should print two space-separated integers on one line: the minimum
 sum and the maximum sum of  of  elements.

miniMaxSum has the following parameter(s):

arr: an array of  integers
Input Format

A single line of five space-separated integers.

Constraints


Output Format

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing
 exactly four of the five integers. (The output can be greater than a 32 bit integer.)

Sample Input

1 2 3 4 5
Sample Output

10 14
Explanation

Hints: Beware of integer overflow! Use 64-bit Integer.
 */

void miniMaxSum(vector<int> arr) {
    int mi = INT_MAX;
    int ma = INT_MIN;
    long long sum = 0;

    for(auto num : arr) {
        mi = std::min(mi, num);
        ma = std::max(ma, num);
        sum += num;
    }

    cout << sum - ma << ' ' << sum - mi;
}