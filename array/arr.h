#pragma once

#include <vector>
#include <stack>
#include <unordered_map>
#include <set>

using std::vector;
using std::stack;
using std::unordered_map;
using std::set;

int findMaxLength(vector<int>& nums);
int removeDuplicates(vector<int>& nums);
vector<int> productExceptSelf(vector<int>& nums);
int subarraySum(vector<int>& nums, int k);
int maxSubarraySumCircular(vector<int>& A);
int removeElement(vector<int>& nums, int val);
void nextPermutation(vector<int>& nums);
int countServers(vector<vector<int>>& grid);
void rotate(vector<vector<int>>& matrix);
void setZeroes(vector<vector<int>>& matrix);
bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2);
int countBattleships(vector<vector<char>>& board);
int orderOfLargestPlusSign(int N, vector<vector<int>>& mines);
int minDominoRotations(vector<int>& A, vector<int>& B);
bool isValidSudoku(vector<vector<char>>& board);
int maxChunksToSorted(vector<int>& arr);
int maxChunksToSortedII(vector<int>& arr);
bool checkPossibility(vector<int>& nums);
bool containsDuplicate(vector<int>& nums);
bool containsNearbyDuplicate(vector<int>& nums, int k);
void gameOfLife(vector<vector<int>>& board);
int peakIndexInMountainArray(vector<int>& A);
void moveZeroes(vector<int>& nums);
vector<int> spiralOrder(vector<vector<int>>& matrix);
vector<vector<int>> generateMatrix(int n); /// Spiral Matrix II
bool searchMatrix(vector<vector<int>>& matrix, int target);
vector<int> prisonAfterNDays(vector<int>& cells, int N);
vector<int> findDisappearedNumbers(vector<int>& nums);
int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target);
int numTimesAllBlue(vector<int>& light);
void sortColors(vector<int>& nums);