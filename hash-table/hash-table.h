#pragma once

#include <unordered_map>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::unordered_map;

vector<int> twoSum(vector<int>& nums, int target);
int minAreaRect(vector<vector<int>>& points);
int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats);
vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries);
bool isStrobogrammatic(string num);

/// MICROSOFT OA
int maxSum(vector<int>& A);
int minDeletions(string s);
int getLargestNum(vector<int>& array);

/// AMAZON OA
unordered_map<string, vector<string>> songsAndGenre(unordered_map<string, vector<string>>& users,
                                                    unordered_map<string, vector<string>>& genres);

class TimeMap {
public:
    TimeMap();

    void set(string key, string value, int timestamp);

    string get(string key, int timestamp);
};