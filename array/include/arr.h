#pragma once

#include <vector>
#include <stack>
#include <algorithm>
#include <unordered_map>

std::vector<int> searchRange(std::vector<int>& nums, int target);
std::vector<int> searchRangeSTL(std::vector<int>& nums, int target);
int findDuplicate(const std::vector<int>& nums);
int findMaxLength(std::vector<int>& nums);
int removeDuplicates(std::vector<int>& nums);
std::vector<int> productExceptSelf(std::vector<int>& nums);
int searchInRotatedSortedArray(std::vector<int>& nums, int target);
int subarraySum(std::vector<int>& nums, int k);
int maxSubarraySumCircular(std::vector<int>& A);