#pragma once

#include <string>
#include <vector>
#include <unordered_set>

#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wsign-conversion"
// #pragma GCC diagnostic ignored "-Wshorten-64-to-32"

bool checkInclusion(const std::string& s1, const std::string& s2);
std::vector<int> findAnagrams(const std::string& s, const std::string& p);
int longestSubarray(std::vector<int>& nums, int limit);
int numberOfSubstrings(std::string s);
int numberOfSubarrays(std::vector<int>& nums, int k);
int balancedString(std::string s);
int longestOnes(std::vector<int>& A, int K);
int numSubarraysWithSum(std::vector<int>& A, int S);
int subarraysWithKDistinct(std::vector<int>& A, int K);
int totalFruit(std::vector<int>& tree);
int shortestSubarray(std::vector<int>& A, int K);
int minSubArrayLen(int s, std::vector<int>& nums);
int equalSubstring(std::string s, std::string t, int maxCost);
int characterReplacement(std::string s, int k);
std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k);
int lengthOfLongestSubstring(const std::string& s);