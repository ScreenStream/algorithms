#pragma once

#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using std::string;
using std::vector;
using std::stringstream;
using std::istringstream;
using std::unordered_map;
using std::pair;
using std::unordered_set;

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
string reverseWords(string s);
string reverseStr(string s, int k); /// Reverse String II
string reverseWordsIII(string s);
int countCharacters(vector<string>& words, string chars);
string shortestPalindrome(string s);
string countAndSay(int n);
bool canPermutePalindrome(string s);
bool isOneEditDistance(string s, string t);

class StringCodec {
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string> strs);

    // Decodes a single string to a list of strings.
    vector<string> decode(string s);
};

bool canConvert(string str1, string str2);


/// MICROSOFT OA
int  minMovesToObtain(string s);
int getNoOfSwaps(string s);
string getLongestSubstring(string s);
int maxA(string s);
string cropWords(string s, int k);
int getMinCost(string s, vector<int>& nums);
string riddle(string &str);
string largestCharacter(string s);
string battleship(int N, string S, string T);

/// GOOGLE OA
int minAmplitude(vector<int>& nums);
int numOfSplit(string s);

///
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

inline bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}