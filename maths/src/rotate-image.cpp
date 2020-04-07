#include "maths.h"

/*
 * You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

Note:

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
 */

void rotate(std::vector<std::vector<int>>& matrix) {
    std::reverse(matrix.begin(), matrix.end());

    for(int i = 0; i < matrix.size(); ++i) {
        for(int j = i + 1; j < matrix[0].size(); ++j) {
            if(i != j) {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
}
