#include "str.h"

using namespace std;

/*
 * You have an array of logs.  Each log is a space delimited string of words.

For each log, the first word in each log is an alphanumeric identifier.  Then, either:

Each word after the identifier will consist only of lowercase letters, or;
Each word after the identifier will consist only of digits.
We will call these two varieties of logs letter-logs and digit-logs.  It is guaranteed that each log has at least one word after its identifier.

Reorder the logs so that all of the letter-logs come before any digit-log.
 The letter-logs are ordered lexicographically ignoring identifier, with the identifier used in case of ties.
 The digit-logs should be put in their original order.

Return the final order of the logs.



Example 1:

Input: logs = ["dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"]
Output: ["let1 art can","let3 art zero","let2 own kit dig","dig1 8 1 5 1","dig2 3 6"]


Constraints:

0 <= logs.length <= 100
3 <= logs[i].length <= 100
logs[i] is guaranteed to have an identifier, and a word after the identifier.
 */

vector<string> reorderLogFiles(vector<string>& logs) {
    vector<string> res;
    vector<string> digitLogs;
    vector<pair<string, string>> letterLogs;

    for(const auto& log : logs) {
        int i = log.find(' ');
        /*
         * while (s[i] != ' ') ++i; /// The index of the first space could be found like this way, too. But string::find method is more concise.
         */

        if(isalpha(log[i + 1])) {
            letterLogs.push_back({log.substr(0, i), log.substr(i + 1)});
        } else {
            digitLogs.push_back(log);
        }
    }

    sort(letterLogs.begin(), letterLogs.end(), [](const auto& a, const auto& b) {
        return a.second == b.second ? a.first < b.first : a.second < b.second; /// In the case of ties, identifiers are considered.
    });

    for(const auto& letterLog : letterLogs) {
        res.push_back(letterLog.first + " " + letterLog.second);
    }

    for(const auto& digitLog : digitLogs) {
        res.push_back(digitLog);
    }

    return res;
}