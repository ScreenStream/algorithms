#include "dp.h"

/*
 * Given a square array of integers A, we want the minimum sum of a falling path through A.

A falling path starts at any element in the first row, and chooses one element from each row.
 The next row's choice must be in a column that is different from the previous row's column by at most one (it can also be 0).



Example 1:

Input: [[1,2,3],[4,5,6],[7,8,9]]
Output: 12
Explanation:
The possible falling paths are:
[1,4,7], [1,4,8], [1,5,7], [1,5,8], [1,5,9]
[2,4,7], [2,4,8], [2,5,7], [2,5,8], [2,5,9], [2,6,8], [2,6,9]
[3,5,7], [3,5,8], [3,5,9], [3,6,8], [3,6,9]
The falling path with the smallest sum is [1,4,7], so the answer is 12.



Note:

1 <= A.length == A[0].length <= 100
-100 <= A[i][j] <= 100
 */

int minFallingPathSum(std::vector<std::vector<int>>& A) {
    for(int i = 1; i < A.size(); ++i) {
        for(int j = 0; j < A[0].size(); ++j) {
            A[i][j] += std::min({A[i - 1][j],
                                 A[i-1][std::max(j - 1, 0)], /// Easy way to deal with boundary indexes.
                                 A[i-1][std::min(j + 1, static_cast<int>(A.size() - 1))]}); /// Easy way to deal with boundary indexes.
        }
    }

    return *std::min_element(A.back().begin(), A.back().end());
}

