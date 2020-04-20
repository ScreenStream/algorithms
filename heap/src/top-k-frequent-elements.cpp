#include "heap.h"

/*
 * Given a non-empty array of integers, return the k most frequent elements.

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
Note:

You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
 */

std::vector<int> topKFrequent(std::vector<int>& nums, int k)
{
    std::unordered_map<int, int> mp;

    for(auto num : nums) {
        ++mp[num];
    }

    auto cmp = [&](int a, int b){
        return mp[a] > mp[b];
    };

    std::priority_queue<int, std::vector<int>, decltype(cmp)> pq(cmp);

    for(auto n : mp) {
        pq.push(n.first);

        if(pq.size() > k) {
            pq.pop();
        }
    }

    std::vector<int> res;
    while(!pq.empty()) {
        res.push_back(pq.top());
        pq.pop();
    }

    return res;
}
