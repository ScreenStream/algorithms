#include "interval.h"

/*
 * Given a collection of intervals, merge all overlapping intervals.

Example 1:

Input: [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
Example 2:

Input: [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 */

vector<vector<int>> merge(vector<vector<int>>& intervals)
{
    if(intervals.empty()) {
        return {};
    }

    sort(intervals.begin(), intervals.end()); /// sort sorts vector of vectors by their first item by default. No need to
                                              /// create a custom comparator for this purpose.
    vector<vector<int>> res;
    res.push_back(intervals[0]);

    for(int i = 1; i < intervals.size(); ++i) {
        if(intervals[i].front() <= res.back().back()) {
            res.back().back() = max(res.back().back(), intervals[i].back());
        } else {
            res.push_back(intervals[i]);
        }
    }

    return res;
}

