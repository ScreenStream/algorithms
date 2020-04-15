#include "bfs.h"

/*
 * Given two words (beginWord and endWord), and a dictionary's word list, find the length of shortest transformation sequence from beginWord to endWord, such that:

Only one letter can be changed at a time.
Each transformed word must exist in the word list. Note that beginWord is not a transformed word.
Note:

Return 0 if there is no such transformation sequence.
All words have the same length.
All words contain only lowercase alphabetic characters.
You may assume no duplicates in the word list.
You may assume beginWord and endWord are non-empty and are not the same.
Example 1:

Input:
beginWord = "hit",
endWord = "cog",
wordList = ["hot","dot","dog","lot","log","cog"]

Output: 5

Explanation: As one shortest transformation is "hit" -> "hot" -> "dot" -> "dog" -> "cog",
return its length 5.
Example 2:

Input:
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log"]

Output: 0

Explanation: The endWord "cog" is not in wordList, therefore no possible transformation.
 */

/// If beginWord and endWord is the same we will accept that the length of the shortest transformation sequence is 1.

int ladderLength(const std::string& beginWord, const std::string& endWord, std::vector<std::string>& wordList) {
    /// We create a set out of the given word list, so that our search would be way faster. O(1) for unordered_set.
    std::unordered_set<std::string> words(wordList.begin(), wordList.end());

    std::queue<std::string> todo;
    todo.push(beginWord);
    int res = 1;

    while(!todo.empty()) {
        int size = todo.size();

        for(int i = 0; i < size; ++i) {
            std::string word = todo.front();
            todo.pop();

            if(word == endWord) {
                return res;
            }

            /// This line is crucial. We have to erase parent word (the word that we are generating possible candidates below.)
            /// Otherwise, BFS would never end, since it would find the parent word in the next iteration since it is one char away.
            /// So, we need to avoid this cycles.
            words.erase(word);

            /// We just modify one char at a time and see if it is in the word list.
            for(int j = 0; j < word.size(); ++j) {
                char ch = word[j];

                for(int k = 0; k < 26; ++k) {
                    /// Nice way to loop through all possible lower case letters.
                    word[j] = 'a' + k;

                    if(words.count(word)) {
                        todo.push(word);
                    }
                }

                /// Do not forget to discard recent modification so that we can process from the original word.
                word[j] = ch;
            }
        }

        ++res;
    }

    return 0;
}
