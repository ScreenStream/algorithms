#pragma once

#include <stack>
#include <vector>
#include <string>
#include <algorithm>

struct TreeNode;

std::vector<std::string> generateParenthesis(int n);
std::vector<std::vector<std::string>> partition(const std::string& s);
std::vector<std::vector<int>> subsets(const std::vector<int>& nums);
std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums);
std::vector<std::vector<int>> permute(std::vector<int>& nums);
std::vector<std::vector<int>> permuteUnique(std::vector<int>& nums);
std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target);
std::vector<std::vector<int>> pathSumII(TreeNode* root, int sum);
std::vector<std::string> letterCasePermutation(std::string S);
int maxScoreWords(std::vector<std::string>& words, std::vector<char>& letters, std::vector<int>& score);
void solveSudoku(std::vector<std::vector<char>>& board);
std::vector<std::string> letterCombinations(const std::string& digits);
std::vector<std::vector<std::string>> solveNQueens(int n);
int totalNQueens(int n); /// N-Queens II
std::vector<std::vector<int>> knightsTour(int m, int n, int x, int y); /// Not on leetcode.
std::vector<std::string> removeInvalidParentheses(std::string s);
bool judgePoint24(std::vector<int>& nums);
std::vector<std::vector<int>> findSubsequences(std::vector<int>& nums);
int tilingRectangle(int n, int m);