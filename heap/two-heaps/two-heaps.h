#pragma once

#include <queue>

std::vector<double> medianSlidingWindow(std::vector<int>& nums, int k);
int findMaximizedCapital(int k, int W, std::vector<int>& Profits, std::vector<int>& Capital); /// IPO

class MedianFinder {
public:
    void addNum(int num);
    double findMedian();

private:
    std::priority_queue<int> lower;
    std::priority_queue<int, std::vector<int>, std::greater<>> higher;
    bool even = true;
};