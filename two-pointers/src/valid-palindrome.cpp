#include "two-pointers.h"

/*
 * Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
 */

bool isPalindrome(std::string s) {
    int i = 0;
    int j = s.size() - 1;

    /// Note that here we have nested while loop. Usually nested while loops check the same condition, and usually serve the purpose of skipping invalid cases.
    while(i < j) {
        while(i < j && !std::isalnum(s[i])) {
            ++i;
        }

        while(i < j && !std::isalnum(s[j])) {
            --j;
        }

        if(std::toupper(s[i++]) != std::toupper(s[j--])) {
            return false;
        }
    }

    return true;
}