#include "two-pointers.h"

/// https://leetcode.com/discuss/interview-question/679321/google-onsite-determine-if-word-is-typo-because-of-stuck-key
/// Very similar to https://leetcode.com/problems/expressive-words/ but better worded question.

/*
 * Given a dictionary of valid words, write a function isTypoBecauseStuckKey() that accepts a string to determine
 * if the string has a typo that is strictly caused by a stuck key.

Example:

Input:
Dictionary: { hello, cat, world, dog, bird, grass, green, help, greet, great }
String: bbbirrrdddd

Output: True

Explanation: The character's 'b', 'r', & 'd' all repeat. Assuming their keys got stuck, we can form the word 'bird',
 which exists in the dictionary.
Example:

Input:
Dictionary: { hello, cat, world, dog, bird, grass, green, help, greet, great }
String: gggraasssa

Output: False

Explanation: The a at the end is not the result of a stuck key, and thus it is impossible for it to exist in the dictionary.
 */

bool isTypoBecauseStuckKey(vector<std::string>& dict, const std::string& key) {
    return false;
}