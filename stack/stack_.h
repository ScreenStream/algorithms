#include <stack>
#include <vector>
#include <string>

struct  ListNode;

bool isValid(std::string s);
std::vector<int> dailyTemperatures(std::vector<int>& T);
int scoreOfParentheses(const std::string& S);
std::vector<int> nextLargerNodes(ListNode* head);

class StockSpanner {
public:
    StockSpanner() = default;
    int next(int price);

private:
    std::stack<std::pair<int, int>> st;
};