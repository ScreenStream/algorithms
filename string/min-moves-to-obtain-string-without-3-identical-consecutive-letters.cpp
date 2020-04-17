#include "str.h"

/// MICROSOFT OA
/// https://leetcode.com/discuss/interview-question/398026/

/*
 * You are given a string S consisting of N letters 'a' and/or b..
 * In one move, you can swap one letter for the other Cit for it or V for 'al.
 * Write a function solution that given such a string S, returns the minimum number of moves
 * required to obtain a string containing no instances of three identical consecutive letters.
 */

int  minMovesToObtain(string s){
    int res = 0;
    for(int i = 0 ; i < s.length() ;){
        int next = i+1;
        while(next < s.length() && s[i] == s[next]) next++;
        res += (next - i)/3;
        i = next;
    }
    return res;
}