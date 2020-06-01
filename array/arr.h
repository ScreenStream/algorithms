#pragma once

#include <vector>
#include <stack>
#include <unordered_map>
#include <set>

int findMaxLength(std::vector<int>& nums);
int removeDuplicates(std::vector<int>& nums);
std::vector<int> productExceptSelf(std::vector<int>& nums);
int subarraySum(std::vector<int>& nums, int k);
int maxSubarraySumCircular(std::vector<int>& A);
int removeElement(std::vector<int>& nums, int val);
void nextPermutation(std::vector<int>& nums);
int countServers(std::vector<std::vector<int>>& grid);
void rotate(std::vector<std::vector<int>>& matrix);
void setZeroes(std::vector<std::vector<int>>& matrix);
bool isRectangleOverlap(std::vector<int>& rec1, std::vector<int>& rec2);
int countBattleships(std::vector<std::vector<char>>& board);
int orderOfLargestPlusSign(int N, std::vector<std::vector<int>>& mines);
int minDominoRotations(std::vector<int>& A, std::vector<int>& B);
bool isValidSudoku(std::vector<std::vector<char>>& board);
int maxChunksToSorted(std::vector<int>& arr);
int maxChunksToSortedII(std::vector<int>& arr);
bool checkPossibility(std::vector<int>& nums);
bool containsDuplicate(std::vector<int>& nums);
bool containsNearbyDuplicate(std::vector<int>& nums, int k);
void gameOfLife(std::vector<std::vector<int>>& board);
int peakIndexInMountainArray(std::vector<int>& A);
void moveZeroes(std::vector<int>& nums);
std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix);
std::vector<std::vector<int>> generateMatrix(int n); /// Spiral Matrix II
bool searchMatrix(std::vector<std::vector<int>>& matrix, int target);
std::vector<int> prisonAfterNDays(std::vector<int>& cells, int N);
std::vector<int> findDisappearedNumbers(std::vector<int>& nums);
int numSubmatrixSumTarget(std::vector<std::vector<int>>& matrix, int target);