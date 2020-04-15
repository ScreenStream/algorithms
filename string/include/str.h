#pragma once

#include <vector>
#include <string>
#include <sstream>
#include <unordered_set>
#include <unordered_map>

int lengthOfLongestSubstring1(const std::string& s);
int lengthOfLongestSubstring2(const std::string& s);
void reverseString(std::vector<char>& s);
std::vector<std::string> letterCombinationsBFS(const std::string& digits);
std::vector<std::string> letterCombinationsDFS(const std::string& digits);
std::vector<std::string> letterCombinationsBacktracking(const std::string& digits);
bool backspaceCompare(std::string S, std::string T);
bool backspaceCompare2(std::string S, std::string T);
std::string removeDuplicateLetters(std::string s);
int firstUniqChar(std::string s);

inline std::vector<std::string> split(const std::string& s, char delimiter)
{
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);

    while (std::getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }

    return tokens;
}