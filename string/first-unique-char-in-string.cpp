#include "str.h"

int firstUniqChar(std::string s) {
    std::unordered_map<char, std::pair<int, int>> map;

    for(int i = 0; i < s.size(); ++i) {
        map[s[i]].first = i;
        map[s[i]].second++;
    }

    int minIndex = INT_MAX;

    for(auto p : map) {
        if(p.second.second == 1) {
            minIndex = std::min(minIndex, p.second.first);
        }
    }

    return minIndex == INT_MAX ? -1 : minIndex;
}