#pragma once

#include <stack>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::stack;
using std::max;
using std::min;

struct TreeNode;

bool isValid(string s);
int scoreOfParentheses(const string& S);
int evalRPN(vector<string>& tokens);
int largestRectangleArea(vector<int>& heights);
string minRemoveToMakeValid(string s);
vector<int> exclusiveTime(int n, vector<string>& logs);
vector<int> asteroidCollision(vector<int>& asteroids);
string removeDuplicates(string S);
TreeNode* recoverFromPreorder(string S);
int calculate(string s);
string simplifyPath(string path);
int minAddToMakeValid(string S);
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2);
int calPoints(vector<string>& ops);
string reverseParentheses(string s);
string removeDuplicates(string s, int k);
string candyCrush1D(string s);