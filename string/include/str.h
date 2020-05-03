#pragma once

#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
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
bool checkValidString(std::string s);
std::string mostCommonWord(std::string paragraph, std::vector<std::string>& banned);
std::vector<int> partitionLabels(std::string S);
std::string longestPalindrome(std::string s);
bool isIsomorphic(std::string s, std::string t);
std::string reorganizeString(std::string S);
std::string frequencySort(std::string s);
bool isAlienSorted(std::vector<std::string>& words, std::string order);
int numJewelsInStones(std::string J, std::string S);
bool canConstruct(const std::string& ransomNote, const std::string& magazine);

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

inline bool isPalindrome(const std::string& s, int i, int j) {
    while(i < j) {
        if(s[i++] != s[j--]) {
            return false;
        }
    }

    return true;
}