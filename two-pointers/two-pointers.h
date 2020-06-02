#pragma once

#include <vector>
#include <algorithm>
#include <string>

using std::vector;
using std::string;
using std::sort;
using std::reverse;
using std::max;
using std::min;

int maxArea(vector<int>& height);
vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
vector<int> intersection(vector<int>& nums1, vector<int>& nums2);
vector<vector<int>> threeSum(vector<int>& nums);
bool isPalindrome(string s);
void duplicateZeros(vector<int>& arr);
vector<int> sortedSquares(vector<int>& A);
int threeSumClosest(vector<int>& nums, int target);
int numSubarrayProductLessThanK(vector<int>& nums, int k);
vector<vector<int>> fourSum(vector<int>& nums, int target);
bool validPalindrome(string s);
int trap(vector<int>& height);
vector<int> twoSum(vector<int>& numbers, int target);
bool isLongPressedName(string name, string typed);
int largestNum(vector<int>& nums);

/// AMAZON OA
vector<int> getPairs(vector<int>& a, vector<int>& b, int target);