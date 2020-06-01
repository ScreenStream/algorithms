#pragma once

#include <stack>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::stack;
using std::sort;
using std::reverse;

struct TreeNode;

vector<string> generateParenthesis(int n);
vector<vector<string>> partition(const string& s);
vector<vector<int>> subsets(const vector<int>& nums);
vector<vector<int>> subsetsWithDup(vector<int>& nums);
vector<vector<int>> permute(vector<int>& nums);
vector<vector<int>> permuteUnique(vector<int>& nums);
vector<vector<int>> combinationSum(vector<int>& candidates, int target);
vector<vector<int>> pathSumII(TreeNode* root, int sum);
vector<string> letterCasePermutation(string S);
int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score);
void solveSudoku(vector<vector<char>>& board);
vector<string> letterCombinations(const string& digits);
vector<vector<string>> solveNQueens(int n);
int totalNQueens(int n); /// N-Queens II
vector<vector<int>> knightsTour(int m, int n, int x, int y); /// Not on leetcode.
vector<string> removeInvalidParentheses(string s);
bool judgePoint24(vector<int>& nums);
vector<vector<int>> findSubsequences(vector<int>& nums);
int tilingRectangle(int n, int m);
int maxLength(vector<string>& arr);