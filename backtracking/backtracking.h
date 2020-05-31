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