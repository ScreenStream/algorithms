#include "str.h"

/*
 * Given a string, you need to reverse the order of characters in each word within a sentence
 * while still preserving whitespace and initial word order.

Example 1:
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Note: In the string, each word is separated by single space and there will
 not be any extra space in the string.
 */

string reverseWordsIII(string s) {
    if(s.empty()) {
        return s;
    }

    string res;

    stringstream ss(s);
    string token;

    while(ss >> token) {
        std::reverse(token.begin(), token.end());
        res += token;
        res += " ";
    }

    res.pop_back();

    return res;
}