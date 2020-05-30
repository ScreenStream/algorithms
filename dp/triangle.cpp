#include "dp.h"

/*
 * Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

For example, given the following triangle

[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]
The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).

Note:

Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.
 */

/// Very similar to "minimum falling path sum" question.
int minimumTotal(std::vector<std::vector<int>>& triangle) {
    for(int i = 1; i < triangle.size(); ++i) {
        for(int j = 0; j < triangle[i].size(); ++j) { /// Note that we use triangle[i] instead of triangle[0] since every row has different number of columns.
            triangle[i][j] += std::min(triangle[i - 1][std::max(0, j - 1)], triangle[i - 1][std::min(static_cast<int>(triangle[i - 1].size()) - 1, j)]);
        }
    }

    return *std::min_element(triangle.back().begin(), triangle.back().end());
}