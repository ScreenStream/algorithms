#pragma once

#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using std::string;
using std::vector;
using std::istringstream;

void reverseString(vector<char>& s);
bool backspaceCompare(string S, string T);
bool backspaceCompare2(string S, string T);
string removeDuplicateLetters(string s);
int firstUniqChar(string s);
bool checkValidString(string s);
string mostCommonWord(string paragraph, vector<string>& banned);
vector<int> partitionLabels(string S);
string longestPalindrome(string s);
bool isIsomorphic(string s, string t);
string reorganizeString(string S);
string frequencySort(string s);
bool isAlienSorted(vector<string>& words, string order);
int numJewelsInStones(string J, string S);
bool canConstruct(const string& ransomNote, const string& magazine);
string addStrings(const string& num1, const string& num2);
string removeKdigits(string num, int k);
vector<string> reorderLogFiles(vector<string>& logs);
int numSteps(string s);
string convert(string s, int numRows);
int myAtoi(string str);
int numUniqueEmails(vector<string>& emails);
vector<vector<string>> groupStrings(vector<string>& strings);
int compareVersion(string version1, string version2);
bool repeatedSubstringPattern(string s);
int strStr(string haystack, string needle);
string licenseKeyFormatting(string S, int K);

inline vector<string> split(const string& s, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);

    while (getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }

    return tokens;
}

inline bool isPalindrome(const string& s, int i, int j) {
    while(i < j) {
        if(s[i++] != s[j--]) {
            return false;
        }
    }

    return true;
}