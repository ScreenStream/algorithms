#include "sliding-window.h"

/// MICROSOFT OA
/// https://leetcode.com/discuss/interview-question/398037/

/*
 * You are given a string S of length N containing only characters 'a' and 'b'. A substring
 * (contiguous fragment) of S is called a semi-alternating substring if it does not contain three identical
 * consecutive characters. In other words, it does not contain either 'aaa' or 'bbb' substrings.
 * Note that whole S is its own substring.
Write a function which, given a string S. returns the length of the longest semi-alternating substring of S.
 */

string maxSemiAlternatingString(string S) {
    return {};
}


/*
 * public static String maxSemiAlternatingString (String s) {
        char[] arr = s.toCharArray();
        if (arr.length < 3) {
            return s;
        }
        String res = "";
        int len = arr.length, a = 0, b = 0, l = 0, r = 0, max = 0;
        while (r < len) {
            char c = arr[r];
            if (c == 'a') {
                b = 0;
                a++;
            } else if (c == 'b') {
                a = 0;
                b++;
            }
            if (a < 3 && b < 3) {
                if (r - l + 1 > max) {
                    max = r - l + 1;
                    res = s.substring(l, r + 1);
                }
            } else {
                l = r - 1;
                if (a == 3) {
                    a = 2;
                } else if (b == 3) {
                    b = 2;
                }
            }
            r++;
        }
        return res;
    }
 */