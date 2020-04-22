#include "str.h"

/*
 * Given a string, sort it in decreasing order based on the frequency of characters.

Example 1:

Input:
"tree"

Output:
"eert"

Explanation:
'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input:
"cccaaa"

Output:
"cccaaa"

Explanation:
Both 'c' and 'a' appear three times, so "aaaccc" is also a valid answer.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:

Input:
"Aabb"

Output:
"bbAa"

Explanation:
"bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
 */

std::string frequencySort(std::string s) {
    std::vector<int> charmap(256);

    for(auto ch : s) {
        charmap[ch]++;
    }

    std::sort(s.begin(), s.end(), [&charmap](auto a, auto b){
        return charmap[a] > charmap[b] || (charmap[a] == charmap[b] && a < b); /// (charmap[a] == charmap[b] && a < b) is important!
                                                                               /// Otherwise, in letters that have the same frequency we would
                                                                               /// have them mixed up! a > b would also work, of course.
    });

    return s;
}