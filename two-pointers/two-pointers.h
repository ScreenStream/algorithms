#pragma once

#include <vector>
#include <algorithm>
#include <string>

int maxArea(std::vector<int>& height);
std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2);
std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2);
std::vector<std::vector<int>> threeSum(std::vector<int>& nums);
bool isPalindrome(std::string s);
void duplicateZeros(std::vector<int>& arr);
std::vector<int> sortedSquares(std::vector<int>& A);
int threeSumClosest(std::vector<int>& nums, int target);
int numSubarrayProductLessThanK(std::vector<int>& nums, int k);
std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target);
bool validPalindrome(std::string s);
int trap(std::vector<int>& height);