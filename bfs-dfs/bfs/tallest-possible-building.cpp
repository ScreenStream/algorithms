#include "bfs.h"

/// https://leetcode.com/discuss/interview-question/672508/Google-L5-or-Onsite-or-Tallest-possible-building

/*
 * City makes a plan for buildings and parking lots on land. The land can be divided into equal sized tiles.
 * Each tile is either a building or parking lot. The height difference between building/parking lots on
 * two adjacent tiles is no more than one. The locations of parking lots on the land are fixed.
 * Write a function to find what is the highest building can be planned.
 * [Adjacency only includes left, right, up and down.
 * Specifically diagonal is not considered - two tiles share an edge to be considered as adjacent]

Example 1
Input

- - -
- - -
- - P
Output: 4 with following arrangement

4 3 2
3 2 1
2 1 P
Example 2
Input

- - P
- - -
- - P
Output: 3 with following arrangement

2 1 P
3 2 1
2 1 P
 */

int tallestBuilding(vector<vector<char>>& grid) {
    return 0;
}