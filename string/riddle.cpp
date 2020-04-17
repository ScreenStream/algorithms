#include "str.h"

/// MICROSOFT OA
/// https://leetcode.com/discuss/interview-question/578315/

/*
 * Rick is a fan of logic based games. However, he is bored of the classic ones, like sudoku and mastermind,
 * since he has solved so many of them. Recently he found a new game in which one is given a string with some question
 * marks in it. The objective is to replace all of the question marks with letters (one letter per question mark)
 * in such a may that no letter appears next to another letter of the same kind.
Write a function:
class Solution public String solution(string riddle);
That, given a String riddle, returns a copy of the string with all of the ?
 Replaced by lowercase letters (a-z) in such a way that the same letter don't occur next to each other.
 The result can be any of the possible answers as long as it fulfils the above requirements.
Examples:
Given riddle = "ab?ac?", your function might return "abcaca".

 */

string riddle(string &str) {
    return {};
}




//string solution(string &str) {
//    for (int i = 0; i < str.size(); ++i) {
//
//        if (str[i] == '?') {
//            for (char c = 'a'; c < 'd'; ++c) {
//                if ((i == 0 || c != str[i - 1]) && (i == str.size() - 1 || c != str[i + 1])) {
//                    str[i] = c;
//                    break;
//                }
//            }
//        }
//    }
//
//    return str;
//}