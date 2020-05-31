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
std::vector<std::vector<int>> kSmallestPairs(std::vector<int>& nums1, std::vector<int>& nums2, int k);
int findKthLargest(std::vector<int>& nums, int k);

class KthLargest {
public:
    priority_queue<int, std::vector<int>, greater<>> pq;
    int size;
    KthLargest(int k, const std::vector<int>& nums);
    int add(int val);
};