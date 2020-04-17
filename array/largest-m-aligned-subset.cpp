#include "arr.h"

/// MICROSOFT OA
/// https://leetcode.com/discuss/interview-question/525894/
/// https://www.geeksforgeeks.org/find-set-m-element-whose-difference-two-element-divisible-k/

/*
 * There are N points located on a line, numbered from 0 to N-1, whose coordinates are given in an array A.
 * For each I (0 5 I < t coordinate of point number I on the line is ADJ. The coordinates of points do not
 * have to be distinct. For a given integer M, a subset of these points is said to be M-aligned if the distance between any two points within the subset is divisible by M. Your task is to find the size of the largest M-aligned subset of the given set of N points. For example, consider integer M = 3 and array A such that: A[e] = -3 A[1] = -2 A[2] = 1 A[3] = e A[41 = 8 A[5] = 7 A[6] = 1 A subset containing the points numbered 1, 2, 5 and 6, having coordinates -2,1, 7 and 1, respectively, is an example of a 3-aligned subset, since:
• the distance between points numbered 1 and 2 is abs(A[I] - A[2]) = 3, • the distances from point number 5
 to points numbered 1 and 2 are 9 and 6, respectively, • the distances from point number 6 to points " ---" —" - ----

 */

int getLargestMAlignedSubset(vector<int>& nums, int M) {
    return 0;
}

/*
 * int getLargestMAlignedSubset(vector<int>& nums, int M) {
    if (M <= 1) return nums.size();
    vector<int> MSubset(M, 0);
    int maxCnt = 0;
    for (auto num : nums) {
        int idx = num < 0 ? ((num % M) + M) % M : num % M;
        maxCnt = max(++MSubset[idx], maxCnt);
    }
    return maxCnt;
}
 */