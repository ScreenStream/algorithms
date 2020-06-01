#pragma once

#include <stack>
#include <vector>
#include <string>

bool isValid(std::string s);
int scoreOfParentheses(const std::string& S);
int evalRPN(std::vector<std::string>& tokens);
int largestRectangleArea(std::vector<int>& heights);
std::string minRemoveToMakeValid(std::string s);
std::vector<int> exclusiveTime(int n, std::vector<std::string>& logs);