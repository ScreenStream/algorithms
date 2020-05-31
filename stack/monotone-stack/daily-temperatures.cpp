#include "monotone-stack.h"

/*
 * Given a list of daily temperatures T, return a list such that, for each day in the input, tells you how many days you would have to wait until a warmer temperature. If there is no future day for which this is possible, put 0 instead.

For example, given the list of temperatures T = [73, 74, 75, 71, 69, 72, 76, 73], your output should be [1, 1, 4, 2, 1, 1, 0, 0].

Note: The length of temperatures will be in the range [1, 30000]. Each temperature will be an integer in the range [30, 100].
 */

/// Optimal solution, MONOTONE STACK!
std::vector<int> dailyTemperatures(std::vector<int>& T) {
    std::vector<int> res(T.size());
    std::stack<int> st;

    for(int i = 0; i < T.size(); ++i) {
        while(!st.empty() && T[i] > T[st.top()]) {
            int ind = st.top();
            st.pop();

            res[ind] = i - ind;
        }

        st.push(i);
    }

    return res;
}

/// TLE solution, brute force.
std::vector<int> dailyTemperaturesBruteForce(std::vector<int>& T) {
    std::vector<int> res(T.size(), 0);

    for(int i = 0; i < T.size() - 1; ++i) {
        int count = 0;

        for(int j = i + 1; j < T.size(); ++j) {
            ++count;

            if(T[j] > T[i]) {
                res[i] = count;
                break;
            }
        }
    }

    return res;
}





