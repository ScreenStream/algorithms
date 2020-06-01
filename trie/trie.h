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