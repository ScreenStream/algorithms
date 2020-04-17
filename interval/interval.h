#pragma once

#include <vector>
#include <algorithm>

using std::vector;
using std::sort;
using std::max;
using std::min;
using std::reverse;

vector<vector<int>> merge(vector<vector<int>>& intervals);
vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B);
vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval);
bool canAttendMeetings(vector<vector<int>>& intervals);
int minMeetingRooms(vector<vector<int>>& intervals);
int eraseOverlapIntervals(vector<vector<int>>& intervals);
int findMinArrowShots(vector<vector<int>>& points);
int mostFrequent(vector<vector<int>>v); /// Facebook Onsite
bool carPooling(vector<vector<int>>& trips, int capacity);