#pragma once

#include <vector>
#include <stack>
#include <unordered_map>

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