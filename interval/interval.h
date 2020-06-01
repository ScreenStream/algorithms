#pragma once

#include <vector>
#include <algorithm>

std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals);
std::vector<std::vector<int>> intervalIntersection(std::vector<std::vector<int>>& A, std::vector<std::vector<int>>& B);
std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval);
bool canAttendMeetings(std::vector<std::vector<int>>& intervals);
int minMeetingRooms(std::vector<std::vector<int>>& intervals);