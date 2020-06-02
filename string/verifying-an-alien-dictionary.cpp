#include "str.h"



/*
 * In an alien language, surprisingly they also use english lowercase letters, but possibly in a different order. The order of the alphabet is some permutation of lowercase letters.

Given a sequence of words written in the alien language, and the order of the alphabet, return true if and only if the given words are sorted lexicographicaly in this alien language.



Example 1:

Input: words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"
Output: true
Explanation: As 'h' comes before 'l' in this language, then the sequence is sorted.
Example 2:

Input: words = ["word","world","row"], order = "worldabcefghijkmnpqstuvxyz"
Output: false
Explanation: As 'd' comes after 'l' in this language, then words[0] > words[1], hence the sequence is unsorted.
Example 3:

Input: words = ["apple","app"], order = "abcdefghijklmnopqrstuvwxyz"
Output: false
Explanation: The first three characters "app" match, and the second string is shorter (in size.) According to lexicographical rules "apple" > "app", because 'l' > '∅', where '∅' is defined as the blank character which is less than any other character (More info).


Constraints:

1 <= words.length <= 100
1 <= words[i].length <= 20
order.length == 26
All characters in words[i] and order are English lowercase letters.
 */

bool isAlienSorted(vector<string>& words, string order) {
    vector<int> dict(26);

    for(int i = 0; i < order.size(); ++i) {
        dict[order[i] - 'a'] = i;
    }

    /// We are converting alien dictionary to regular dictionary here. For example, if h is the first letter in their dictionary,
    /// here we will convert all h's to a's. (Even though we could have converted them to ASCII 0). The point is their order.
    for(auto& word : words) {
        for(auto& ch : word) {
            ch = dict[ch - 'a'] + 'a'; /// We do not even need to add 'a' actually, we could have represented ASCII a character with ASCII 0.
        }
    }

    return is_sorted(words.begin(), words.end());
}