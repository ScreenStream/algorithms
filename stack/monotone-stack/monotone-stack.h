#pragma once

#include <stack>
#include <vector>
#include <string>

using std::vector;
using std::string,
using std::stack;
using std::pair;

struct ListNode;
struct TreeNode;

vector<int> nextLargerNodes(ListNode* head);
vector<int> dailyTemperatures(vector<int>& T);
int sumSubarrayMins(vector<int>& A);
TreeNode* constructMaximumBinaryTree(vector<int>& nums);
string smallestSubsequence(string text);

class StockSpanner {
public:
    StockSpanner() = default;
    int next(int price);

private:
    stack<pair<int, int>> st;
};