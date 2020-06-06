#pragma once

#include <vector>
#include <string>
#include <stack>
#include <unordered_map>
#include <set>
#include <iostream>

using std::vector;
using std::string;
using std::stack;
using std::unordered_map;
using std::pair;
using std::set;
using std::max;
using std::min;
using std::cout;
using std::endl;

enum class InitialPosition;
enum class MovingDirection;

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
int repeatedNTimes(vector<int>& A);
bool containsDuplicate(vector<int>& nums);
bool containsNearbyDuplicate(vector<int>& nums, int k);
void gameOfLife(vector<vector<int>>& board);
void moveZeroes(vector<int>& nums);
vector<int> spiralOrder(vector<vector<int>>& matrix);
vector<vector<int>> generateMatrix(int n); /// Spiral Matrix II
bool searchMatrix(vector<vector<int>>& matrix, int target);
vector<int> prisonAfterNDays(vector<int>& cells, int N);
vector<int> findDisappearedNumbers(vector<int>& nums);
int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target);
int numTimesAllBlue(vector<int>& light);
void sortColors(vector<int>& nums);
bool isToeplitzMatrix(vector<vector<int>>& matrix);
vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c);
int findNumbers(vector<int>& nums);
int minTotalDistance(vector<vector<int>>& grid);
int firstMissingPositive(vector<int>& nums);
vector<int> findDuplicates(vector<int>& nums);
int findUnsortedSubarray(vector<int>& nums);
vector<vector<int>> constructMatrix(int n, int m, InitialPosition start, MovingDirection direction); /// Google Phone Screen
int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B);
bool validTicTacToe(vector<string>& board);
vector<vector<int>> generate(int numRows);
vector<int> getRow(int rowIndex);

/// Hackerrank
int diagonalDifference(vector<vector<int>> arr);
void staircase(int n);

/// MICROSOFT OA
int minSteps(vector<int>& piles);
int getNumOfFairIndexes(vector<int>& A, vector<int>& B);
int getLargestMAlignedSubset(vector<int>& nums, int M);