#pragma once

#include <vector>
#include <string>
#include <bitset>

using std::vector;
using std::string;
using std::bitset;
using std::max;
using std::min;

struct ListNode;

int singleNumber(vector<int>& nums);
int singleNumberII(vector<int>& nums);
vector<int> singleNumberIII(vector<int>& nums);
int rangeBitwiseAnd(int m, int n);
int bitwiseComplement(int N);
int divide(int dividend, int divisor);
int getSum(int a, int b);
vector<int> countBits(int num);
int hammingWeight(uint32_t n);
int missingNumber(vector<int>& nums);
uint32_t reverseBits(uint32_t n);
vector<string> findRepeatedDnaSequences(string s);
int maxProduct(vector<string>& words);
vector<vector<int>> subsets(vector<int>& nums);
vector<int> sortByBits(vector<int>& arr);
int numberOfSteps (int num);
int hammingDistance(int x, int y);
int majorityElement(vector<int>& nums);
bool isPowerOfTwo(int n);
bool isPowerOfFour(int num);
char findTheDifference(string s, string t);
vector<string> readBinaryWatch(int num);
string toHex(int num);
int findMaximumXOR(vector<int>& nums);
int findComplement(int num);
int totalHammingDistance(vector<int>& nums);
bool hasAlternatingBits(int n);
int countPrimeSetBits(int L, int R);
int subarrayBitwiseORs(vector<int>& A);
vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles);
int maxLength(vector<string>& arr); /// Maximum Length of a Concatenated String with Unique Characters
int getDecimalValue(ListNode* head);
int minFlips(int a, int b, int c);
int countTriplets(vector<int>& arr);
bool isValidSudoku(vector<vector<char>>& board);
bool canPartitionKSubsets(vector<int>& nums, int k);
int kthGrammar(int N, int K);