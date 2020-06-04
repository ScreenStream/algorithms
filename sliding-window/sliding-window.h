#pragma once

#include <string>
#include <vector>
#include <unordered_set>

using std::vector;
using std::string;
using std::unordered_set;
using std::max;
using std::min;

#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wsign-conversion"
// #pragma GCC diagnostic ignored "-Wshorten-64-to-32"

bool checkInclusion(const string& s1, const string& s2);
vector<int> findAnagrams(const string& s, const string& p);
int longestSubarray(vector<int>& nums, int limit);
int numberOfSubstrings(string s);
int numberOfSubarrays(vector<int>& nums, int k);
int balancedString(string s);
int longestOnes(vector<int>& A, int K);
int numSubarraysWithSum(vector<int>& A, int S);
int subarraysWithKDistinct(vector<int>& A, int K);
int totalFruit(vector<int>& tree);
int shortestSubarray(vector<int>& A, int K);
int minSubArrayLen(int s, vector<int>& nums);
int equalSubstring(string s, string t, int maxCost);
int characterReplacement(string s, int k);
vector<int> maxSlidingWindow(vector<int>& nums, int k);
int lengthOfLongestSubstring(const string& s);
string minWindow(string s, string t);
int lengthOfLongestSubstringTwoDistinct(string s);
vector<int> findSubstring(string s, vector<string>& words);
int maxFreq(string s, int maxLetters, int minSize, int maxSize); /// Maximum Number of Occurrences of a Substring
bool hasAllCodes(string s, int k);
int lengthOfLongestSubstringKDistinct(string s, int k);
int findMaxConsecutiveOnes(vector<int>& nums);
int uniqueLetterString(string s);

/// MICROSOFT OA
string maxSemiAlternatingString(string S);

/// GOOGLE PHONE
int minSwapNum(string& s, int k);

/// AMAZON OA
vector<string> kSubstring(string s, int k);