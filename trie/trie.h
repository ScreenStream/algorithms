#pragma once

#include <vector>
#include <string>

using std::vector;
using std::string;

vector<vector<int>> palindromePairs(vector<string>& words);
vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord);
vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries);

class WordDictionary {
public:
    /** Initialize your data structure here. */
    WordDictionary();

    /** Adds a word into the data structure. */
    void addWord(string word);

    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word);
};

class MagicDictionary {
public:
    /** Initialize your data structure here. */
    MagicDictionary();

    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict);

    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word);
};

class StreamChecker {
public:
    StreamChecker(vector<string>& words);
    bool query(char letter);
};