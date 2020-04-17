#include "stack_.h"

/*
 * Given a balanced parentheses string S, compute the score of the string based on the following rule:

() has score 1
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.


Example 1:

Input: "()"
Output: 1
Example 2:

Input: "(())"
Output: 2
Example 3:

Input: "()()"
Output: 2
Example 4:

Input: "(()(()))"
Output: 6


Note:

S is a balanced parentheses string, containing only ( and ).
2 <= S.length <= 50
 */

int scoreOfParentheses(const string& S) {
    int score = 0;
    stack<int> scores;

    for(auto ch : S) {
        if(ch == '(') {
            /// Each time we encounter a opening parenthesis we reset the score, since this will be a new parenthesis pair. Before resetting the score,
            /// we are pushing the score to the stack so that we can access this score as "the most recent score" when we encounter a closing parenthesis.
            scores.push(score);
            score = 0;
        } else {
            /// When we see a closing parenthesis,
            /// we sum (AB has score A + B, where A and B are balanced parentheses strings.) the previous pair score
            /// with the current score multiplied by 2. ( (A) has score 2 * A, where A is a balanced parentheses string.)
            /// However, we also need to handle the case when this pair is new, and is not nested. In this case, score would be 1 instead of 0 ( () has score 1)
            /// max function handles this case.
            score = scores.top() + max(2 * score, 1);
            scores.pop();
        }
    }

    return score;
}