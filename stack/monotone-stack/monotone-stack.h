#pragma once

#include <stack>
#include <vector>

struct ListNode;

std::vector<int> nextLargerNodes(ListNode* head);
std::vector<int> dailyTemperatures(std::vector<int>& T);
int sumSubarrayMins(std::vector<int>& A);

class StockSpanner {
public:
    StockSpanner() = default;
    int next(int price);

private:
    std::stack<std::pair<int, int>> st;
};