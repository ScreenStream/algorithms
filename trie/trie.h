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

class WordFilter {
public:
    WordFilter(vector<string>& words);

    int f(string prefix, string suffix);
};

class Trie {
public:
    /** Initialize your data structure here. */
    Trie();

    /** Inserts a word into the trie. */
    void insert(string word);

    /** Returns if the word is in the trie. */
    bool search(string word);

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix);
};

vector<bool> camelMatch(vector<string>& queries, string pattern);
string replaceWords(vector<string>& dict, string sentence);
int findMaximumXOR(vector<int>& nums);
vector<string> findWords(vector<vector<char>>& board, vector<string>& words);