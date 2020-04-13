#include "stack_.h"

/*
 * Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

Input: "()"
Output: true
Example 2:

Input: "()[]{}"
Output: true
Example 3:

Input: "(]"
Output: false
Example 4:

Input: "([)]"
Output: false
Example 5:

Input: "{[]}"
Output: true
 */

bool isValid(std::string s) {
    std::stack<char> st;

    for(auto ch : s) {
        if(ch == '(') {
            st.push(')');
        } else if(ch == '[') {
            st.push(']');
        } else if(ch == '{') {
            st.push('}');
        } else {
            if(st.empty()) {
                return false;
            }

            char c = st.top();
            st.pop();

            if(c != ch) {
                return false;
            }
        }
    }

    return st.empty();
}
