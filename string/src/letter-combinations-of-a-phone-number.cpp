#include "str.h"

/*
 * Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Example:

Input: "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
Note:

Although the above answer is in lexicographical order, your answer could be in any order you want.
 */

std::vector<std::string> letterCombinationsBFS(const std::string& digits)
{
    if(digits.empty())
        return {};

    std::vector<std::string> combinations;
    std::string texts[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    combinations.emplace_back(""); /// Seed. Used emplace_back instead of push_back since "" is rvalue.

    for(auto digit : digits) {
        std::string text = texts[digit - '0'];
        std::vector<std::string> temp;

        for(auto letter : text) {
            for(const auto& combination : combinations) {
                temp.push_back(combination + letter);
            }
        }

        combinations.swap(temp); /// We could have written combinations = temp. But this would not avoid copy. Swap moves.
    }

    return combinations;
}

void letterCombinationsDFSHelper(const std::string& prefix, std::vector<std::string>& res, int offset, const std::string& digits)
{
    if(offset == digits.size()) {
        res.push_back(prefix);
        return;
    }
    std::vector<std::string> texts {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    std::string letters = texts[digits[offset] - '0'];

    for(auto letter : letters) {
        letterCombinationsDFSHelper(prefix + letter, res, offset + 1, digits);
    }
}

std::vector<std::string> letterCombinationsDFS(const std::string& digits) {
    if(digits.empty()) return {};
    std::vector<std::string> res;
    letterCombinationsDFSHelper("", res, 0, digits);
    return res;
}

/// Index parameter is important here. Algorithm would know where to start searching solution space from.
void letterCombinationsBacktrackingHelper(const std::vector<std::string>& texts, std::vector<std::string>& res,
                                          std::string& temp, int index, const std::string& digits) {
    if(index==digits.size()) {
        res.push_back(temp);
        return;
    }

    for(int i=0; i < texts[digits[index]-'0'].size();i++) {
        temp.push_back(texts[digits[index]-'0'][i]);
        letterCombinationsBacktrackingHelper(texts, res, temp, index + 1, digits);
        temp.pop_back();
    }
}

std::vector<std::string> letterCombinationsBacktracking(const std::string& digits) {
    if(digits.empty())
        return {};

    std::vector<std::string> combinations;
    std::vector<std::string> texts {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    std::string temp;
    letterCombinationsBacktrackingHelper(texts, combinations, temp, 0, digits);

    return combinations;
}