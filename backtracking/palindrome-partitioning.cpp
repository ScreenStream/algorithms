#include "backtracking/backtracking.h"
#include "str.h"

using namespace std;

/*
 * Given a string s, partition s such that every substring of the partition is a palindrome.

Return all possible palindrome partitioning of s.

Example:

Input: "aab"
Output:
[
  ["aa","b"],
  ["a","a","b"]
]
 */

void helper(vector<string>& temp, vector<vector<string>>& res, string& s, int start)
{
    if(start == s.size()) {
        res.push_back(temp);
        return;
    }

    for(int i = start; i < s.size(); ++i) {
        if(isPalindrome(s, start, i)) {
            temp.push_back(s.substr(start, i - start + 1));
            helper(temp, res, s, i + 1);
            temp.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string>> res;
    vector<string> temp;
    helper(temp, res, s, 0);
    return res;
}