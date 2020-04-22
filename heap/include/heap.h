#pragma once

#include <queue>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

std::vector<int> topKFrequent(std::vector<int>& nums, int k);
int lastStoneWeight(std::vector<int>& stones);
std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points, int K);
std::vector<std::string> topKFrequent(const std::vector<std::string>& words, int k);

class MedianFinder {
public:
    void addNum(int num);
    double findMedian();

private:
    std::priority_queue<int> lower;
    std::priority_queue<int, std::vector<int>, std::greater<>> higher;
    bool even = true;
};