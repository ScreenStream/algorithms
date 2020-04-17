#pragma once

#include <queue>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using std::vector;
using std::string;
using std::max;
using std::min;
using std::reverse;
using std::sort;
using std::unordered_map;
using std::pair;
using std::queue;
using std::greater;
using std::priority_queue;

vector<int> topKFrequent(vector<int>& nums, int k);
int lastStoneWeight(vector<int>& stones);
vector<vector<int>> kClosest(vector<vector<int>>& points, int K);
vector<string> topKFrequent(const vector<string>& words, int k);
vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k);
int findKthLargest(vector<int>& nums, int k);
vector<int> rearrangeBarcodes(vector<int>& barcodes);
vector<int> smallestRange(vector<vector<int>>& nums);
vector<vector<int>> part(vector<int>& T, int n);
vector<int> assignBikes(vector<vector<int>>& workers, vector<vector<int>>& bikes);
string frequencySort(string s);
string reorganizeString(string S);

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<>> pq;
    int size;
    KthLargest(int k, const vector<int>& nums);
    int add(int val);
};