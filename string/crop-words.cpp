#include "str.h"

/// MICROSOFT OA
/// https://leetcode.com/discuss/interview-question/507367/

/*
 * For example given text:
 *
 * "Codility we test coders" with K=14 you should output: codility we
 *
 * crop as less as possible, do not end with space, do not exceed K.
 */

string cropWords(string s, int k) {
    return {};
}

/*
 * private String cropWords(String s, int k){
        if(k >= s.length()){
            return s;
        }
        StringBuilder sb = new StringBuilder(s.substring(0, k));
        if(s.charAt(k) != ' '){
            while(sb.charAt(--k) != ' '){
                sb.deleteCharAt(k);
            }
        }
        while(sb.length() > 0 && sb.charAt(sb.length() - 1) == ' '){
            sb.deleteCharAt(sb.length() - 1);
        }
        return sb.toString();
    }
 */