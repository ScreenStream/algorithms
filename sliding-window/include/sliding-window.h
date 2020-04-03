#pragma once
#include <string>
#include <vector>

#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wsign-conversion"
// #pragma GCC diagnostic ignored "-Wshorten-64-to-32"

bool checkInclusion(const std::string& s1, const std::string& s2);
std::vector<int> findAnagrams(const std::string& s, const std::string& p);
