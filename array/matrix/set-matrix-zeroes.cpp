#include "arr.h"



/*
 * Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place.

Example 1:

Input:
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
Output:
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
Example 2:

Input:
[
  [0,1,2,0],
  [3,4,5,2],
  [1,3,1,5]
]
Output:
[
  [0,0,0,0],
  [0,4,5,0],
  [0,3,1,0]
]
Follow up:

A straight forward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?
 */

/// We wil be using first row and first column as a tracker for the rows and columns except for the first row and column.
/// First row and column will be dealt with two booleans representing if they contain 0 or not.
void setZeroes(vector<vector<int>>& matrix) {
    bool zerofirstcol = false;
    bool zerofirstrow = false;

    for (int i = 0; i < matrix.size(); ++i) {
        if (matrix[i][0] == 0) {
            zerofirstcol = true;
            break;
        }
    }

    for (int j = 0; j < matrix[0].size(); ++j) {
        if (matrix[0][j] == 0) {
            zerofirstrow = true;
            break;
        }
    }

    for (int i = 1; i < matrix.size(); ++i) {
        for (int j = 1; j < matrix[0].size(); ++j) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < matrix.size(); ++i) {
        for (int j = 1; j < matrix[0].size(); ++j) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    if (zerofirstcol) {
        for (int i = 0; i < matrix.size(); ++i) {
            matrix[i][0] = 0;
        }
    }

    if (zerofirstrow) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            matrix[0][j] = 0;
        }
    }
}