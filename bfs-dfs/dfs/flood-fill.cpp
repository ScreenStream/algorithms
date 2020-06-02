#include "dfs.h"

/*
 * An image is represented by a 2-D array of integers, each integer representing the pixel value of the image (from 0 to 65535).

Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.

To perform a "flood fill", consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the
 starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel), and so on.
 Replace the color of all of the aforementioned pixels with the newColor.

At the end, return the modified image.

Example 1:
Input:
image = [[1,1,1],[1,1,0],[1,0,1]]
sr = 1, sc = 1, newColor = 2
Output: [[2,2,2],[2,2,0],[2,0,1]]
Explanation:
From the center of the image (with position (sr, sc) = (1, 1)), all pixels connected
by a path of the same color as the starting pixel are colored with the new color.
Note the bottom corner is not colored 2, because it is not 4-directionally connected
to the starting pixel.
Note:

The length of image and image[0] will be in the range [1, 50].
The given starting pixel will satisfy 0 <= sr < image.length and 0 <= sc < image[0].length.
The value of each color in image[i][j] and newColor will be an integer in [0, 65535].
 */

/// Helper method.
void fill(vector<vector<int>>& image, int sr, int sc, int initial_color, int newColor, const vector<pair<int, int>>& dirs)
{
    image[sr][sc] = newColor;

    for(const auto& dir : dirs)  {
        int nx = dir.first + sr;
        int ny = dir.second + sc;

        if(nx < 0 || ny < 0 || nx >= image.size() || ny >= image[0].size() || image[nx][ny] != initial_color) {
            continue;
        }

        fill(image, nx, ny, initial_color, newColor, dirs);
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int initial_color = image[sr][sc];
    if(initial_color == newColor) {
        return image;
    }

    vector<pair<int, int>> dirs{{0,1},{0,-1},{1,0},{-1,0}};
    fill(image, sr, sc, initial_color, newColor, dirs);
    return image;
}

/// BFS approach. DFS approach is natural fit for this question though.
vector<vector<int>> floodFillBFS(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int initial_color = image[sr][sc];

    /// Important to check if the new color is actually our initial color. Otherwise we would get TLE, since queue would never get emptied.
    if(initial_color == newColor) {
        return image;
    }

    queue<pair<int, int>> coordinates;
    coordinates.push({sr, sc});
    image[sr][sc] = newColor;

    vector<pair<int, int>> dirs{{0,1}, {0,-1}, {1,0}, {-1,0}};

    while(!coordinates.empty()) {
        int size = coordinates.size();

        for(int i = 0; i < size; ++i) {
            pair<int, int> coordinate = coordinates.front();
            coordinates.pop();

            for(const auto& dir : dirs) {
                int nx = dir.first + coordinate.first;
                int ny = dir.second + coordinate.second;

                if(nx < 0 || ny < 0 || nx >= image.size() || ny >= image[0].size() || image[nx][ny] != initial_color) {
                    continue;
                }

                image[nx][ny] = newColor;
                coordinates.push({nx, ny});
            }
        }
    }

    return image;
}