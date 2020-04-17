#pragma once

#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::max;
using std::min;
using std::sort;
using std::reverse;

int firstBadVersion(int n);
bool isSubsequence(string s, string t);
vector<int> searchRange(vector<int>& nums, int target);
int search(vector<int>& nums, int target);
bool searchII(vector<int>& nums, int target);
int searchInRotatedSortedArray(vector<int>& nums, int target);
char nextGreatestLetter(vector<char>& letters, char target);
int singleNonDuplicate(vector<int>& nums);
vector<int> findClosestElements(vector<int>& arr, int k, int x);
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
int mySqrt(int x);
int findPeakElement(vector<int>& nums);
int searchInsert(vector<int>& nums, int target);
int findMin(vector<int>& nums);
int shipWithinDays(vector<int>& weights, int D);
bool searchMatrix(vector<vector<int>>& matrix, int target);
int splitArray(vector<int>& nums, int m);
int findRadius(vector<int>& houses, vector<int>& heaters);
int numMatchingSubseq(string S, vector<string>& words);
int maxSumSubmatrix(vector<vector<int>>& matrix, int k);
int maximizeSweetness(vector<int>& nums, int m);
vector<int> kWeakestRows(vector<vector<int>>& mat, int k);
int guessNumber(int n);
vector<int> intersection(vector<int>& nums1, vector<int>& nums2);
int arrangeCoins(int n);

class RandomPickWeightIndex {
public:
    explicit RandomPickWeightIndex(vector<int>& w);
    int pickIndex();
};

class TopVotedCandidate {
public:
    explicit TopVotedCandidate(vector<int>& persons, vector<int>& times);

    int q(int t);
};