#include "backtracking/backtracking.h"



void helper(vector<string>& res, const string& s, int n, int open, int close)
{
    if(s.size() == n * 2) {
        res.push_back(s);
        return;
    }

    if(open < n) {
        helper(res, s + "(", n, open+1, close);
    }

    if(close < open) {
        helper(res, s + ")", n, open, close+1);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> res;
    helper(res, "", n, 0, 0);
    return res;
}

