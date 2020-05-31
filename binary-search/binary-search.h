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