#include "heap.h"

using namespace std;
/*
 * Given a non-empty list of words, return the k most frequent elements.

Your answer should be sorted by frequency from highest to lowest. If two words have the same frequency, then the word with the lower alphabetical order comes first.

Example 1:
Input: ["i", "love", "leetcode", "i", "love", "coding"], k = 2
Output: ["i", "love"]
Explanation: "i" and "love" are the two most frequent words.
    Note that "i" comes before "love" due to a lower alphabetical order.
Example 2:
Input: ["the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"], k = 4
Output: ["the", "is", "sunny", "day"]
Explanation: "the", "is", "sunny" and "day" are the four most frequent words,
    with the number of occurrence being 4, 3, 2 and 1 respectively.
Note:
You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
Input words contain only lowercase letters.
Follow up:
Try to solve it in O(n log k) time and O(n) extra space.
 */

vector<string> topKFrequent(vector<string>& words, int k) {
    unordered_map<string, int> freqmap;

    for(const auto& word : words) {
        freqmap[word]++;
    }

    auto cmp = [](auto a, auto b){
        return a.second > b.second || (a.second == b.second && a.first < b.first);
    };

    priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(cmp)> pq(cmp);

    vector<string> res;

    for(auto p : freqmap) {
        pq.push(p);

        if(pq.size() > k) {
            pq.pop();
        }
    }

    while(!pq.empty()){
        res.insert(res.begin(), pq.top().first);
        pq.pop();
    }

    return res;
}
/*
 * Inserting at the beginning of a vector with k elements takes O(k) time.

So technically this takes O(nlog(k) + k^2) time.

A better way might be to insert at the end (O(1) amortized time for each insert at the end), then reverse the output vector after the while loop.
 */