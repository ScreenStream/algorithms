#include "str.h"

/*
 * Given a paragraph and a list of banned words, return the most frequent word that is not in the list of banned words.  It is guaranteed there is at least one word that isn't banned, and that the answer is unique.

Words in the list of banned words are given in lowercase, and free of punctuation.  Words in the paragraph are not case sensitive.  The answer is in lowercase.



Example:

Input:
paragraph = "Bob hit a ball, the hit BALL flew far after it was hit."
banned = ["hit"]
Output: "ball"
Explanation:
"hit" occurs 3 times, but it is a banned word.
"ball" occurs twice (and no other word does), so it is the most frequent non-banned word in the paragraph.
Note that words in the paragraph are not case sensitive,
that punctuation is ignored (even if adjacent to words, such as "ball,"),
and that "hit" isn't the answer even though it occurs more because it is banned.


Note:

1 <= paragraph.length <= 1000.
0 <= banned.length <= 100.
1 <= banned[i].length <= 10.
The answer is unique, and written in lowercase (even if its occurrences in paragraph may have uppercase symbols, and even if it is a proper noun.)
paragraph only consists of letters, spaces, or the punctuation symbols !?',;.
There are no hyphens or hyphenated words.
Words only consist of letters, never apostrophes or other punctuation symbols.
 */

std::string mostCommonWord(std::string paragraph, std::vector<std::string>& banned) {
    /// Paragraph is stored in set to make search faster. From O(n) to O(1).
    std::unordered_set<std::string> bans(banned.begin(), banned.end());
    std::unordered_map<std::string, int> map;
    std::pair<std::string, int> maxPair;

    for(auto& ch : paragraph) {
        ch = std::isalpha(ch) ? std::tolower(ch) : ' ';
    }

    std::istringstream oss(paragraph);
    std::string token;
    while(oss >> token) {
        if(!bans.count(token)) {
            ++map[token];

            if(map[token] > maxPair.second) {
                maxPair = {token, map[token]};
            }
        }
    }

    return maxPair.first;
}
