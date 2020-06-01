#pragma once

#include <vector>
#include <string>

std::vector<std::vector<int>> palindromePairs(std::vector<std::string>& words);
std::vector<std::vector<std::string>> suggestedProducts(std::vector<std::string>& products, std::string searchWord);

class WordDictionary {
public:
    /** Initialize your data structure here. */
    WordDictionary();

    /** Adds a word into the data structure. */
    void addWord(std::string word);

    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(std::string word);
};

class MagicDictionary {
public:
    /** Initialize your data structure here. */
    MagicDictionary();

    /** Build a dictionary through a list of words */
    void buildDict(std::vector<std::string> dict);

    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(std::string word);
};

class StreamChecker {
public:
    StreamChecker(std::vector<std::string>& words);
    bool query(char letter);
};