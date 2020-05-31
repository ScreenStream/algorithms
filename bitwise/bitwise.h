#pragma once

#include <vector>
#include <string>
#include <bitset>

struct ListNode;

int singleNumber(std::vector<int>& nums);
int singleNumberII(std::vector<int>& nums);
std::vector<int> singleNumberIII(std::vector<int>& nums);
int rangeBitwiseAnd(int m, int n);
int bitwiseComplement(int N);
int divide(int dividend, int divisor);
int getSum(int a, int b);
std::vector<int> countBits(int num);
int hammingWeight(uint32_t n);
int missingNumber(std::vector<int>& nums);
uint32_t reverseBits(uint32_t n);
std::vector<std::string> findRepeatedDnaSequences(std::string s);
int maxProduct(std::vector<std::string>& words);
std::vector<std::vector<int>> subsets(std::vector<int>& nums);
std::vector<int> sortByBits(std::vector<int>& arr);
int numberOfSteps (int num);
int hammingDistance(int x, int y);
int majorityElement(std::vector<int>& nums);
bool isPowerOfTwo(int n);
bool isPowerOfFour(int num);
char findTheDifference(std::string s, std::string t);
std::vector<std::string> readBinaryWatch(int num);
std::string toHex(int num);
int findMaximumXOR(std::vector<int>& nums);
int findComplement(int num);
int totalHammingDistance(std::vector<int>& nums);
bool hasAlternatingBits(int n);
int countPrimeSetBits(int L, int R);
int subarrayBitwiseORs(std::vector<int>& A);
std::vector<int> findNumOfValidWords(std::vector<std::string>& words, std::vector<std::string>& puzzles);
int maxLength(std::vector<std::string>& arr); /// Maximum Length of a Concatenated String with Unique Characters
int getDecimalValue(ListNode* head);
int minFlips(int a, int b, int c);
int countTriplets(std::vector<int>& arr);