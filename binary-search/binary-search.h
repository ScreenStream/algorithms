#pragma once

#include <vector>
#include <string>
#include <algorithm>

int firstBadVersion(int n);
bool isSubsequence(std::string s, std::string t);
std::vector<int> searchRange(std::vector<int>& nums, int target);
int search(std::vector<int>& nums, int target);
int searchInRotatedSortedArray(std::vector<int>& nums, int target);
char nextGreatestLetter(std::vector<char>& letters, char target);
int singleNonDuplicate(std::vector<int>& nums);
std::vector<int> findClosestElements(std::vector<int>& arr, int k, int x);
double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);
int mySqrt(int x);
int findPeakElement(std::vector<int>& nums);
int searchInsert(std::vector<int>& nums, int target);
int findMin(std::vector<int>& nums);
int shipWithinDays(std::vector<int>& weights, int D);
bool searchMatrix(std::vector<std::vector<int>>& matrix, int target);
int splitArray(std::vector<int>& nums, int m);
int findRadius(std::vector<int>& houses, std::vector<int>& heaters);

class RandomPickWeightIndex {
public:
    RandomPickWeightIndex(std::vector<int>& w);
    int pickIndex();
};