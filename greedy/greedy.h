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