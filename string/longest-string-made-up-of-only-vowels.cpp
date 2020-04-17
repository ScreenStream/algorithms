#include "str.h"

/*
 * You are given with a string . Your task is to remove atmost two substrings of any length from the given string such that the remaining string contains vowels('a','e','i','o','u') only. Your aim is the maximise the length of the remaining string. Output the length of remaining string after removal of atmost two substrings.
NOTE: The answer may be 0, i.e. removing the entire string.

 Ex1:
earthproblem
3

 Ex2:
letsgosomewhere
 2

 */

int longestString(string s) {
    return 0;
}

/*
 * private boolean isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
public int longestString(String s){
    int len = s.length();
    int start = 0, end = len - 1;
    while(start < len && isVowel(s.charAt(start))) ++start;
    while(end >= 0 && isVowel(s.charAt(end))) --end;
    // checking area come to [start, end]
    if(start >= len) return len;
    int res = start + len - 1 - end;
    int longest = 0, sum = 0;
    for(int i = start + 1; i <= end; ++i){
        if(isVowel(s.charAt(i)))
            ++sum;
        else
            sum = 0;
        longest = Math.max(sum, longest);
    }
    return longest + res;
}
 */