#pragma once

#include <queue>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::queue;
using std::greater;
using std::priority_queue;
using std::max;
using std::min;

int minCostConnectRopes(const vector<int>& nums);
bool canJump(vector<int>& nums);
int findLongestChain(vector<vector<int>>& pairs);
int jump(vector<int>& nums);
int videoStitching(vector<vector<int>>& clips, int T);
int minTaps(int n, vector<int>& ranges);
string rearrangeString(string str, int k);
bool canPlaceFlowers(vector<int>& flowerbed, int n);
string breakPalindrome(string palindrome);
int minKBitFlips(vector<int>& A, int K);
int scheduleCourse(vector<vector<int>>& courses);
int canCompleteCircuit(vector<int>& gas, vector<int>& cost);
int candy(vector<int>& ratings);
int wiggleMaxLength(vector<int>& nums);
int findContentChildren(vector<int>& g, vector<int>& s);
int numRescueBoats(vector<int>& people, int limit);
int bagOfTokensScore(vector<int>& tokens, int P);
bool lemonadeChange(vector<int>& bills);
bool isPossibleDivide(vector<int>& nums, int k);
bool isNStraightHand(vector<int>& hand, int W);
vector<vector<int>> groupThePeople(vector<int>& groupSizes);
int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats);
vector<int> advantageCount(vector<int>& A, vector<int>& B);
string reorganizeString(string S);
string removeDuplicateLetters(string s);
string smallestSubsequence(string text);
int minSetSize(vector<int>& arr);
bool checkPossibility(vector<int>& nums);
vector<int> maxDepthAfterSplit(string seq);
string longestDiverseString(int a, int b, int c);