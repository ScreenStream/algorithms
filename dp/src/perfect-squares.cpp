#include "dp.h"

int numSquares(int n) {
    std::vector<int> dp(n + 1, n + 1);

    dp[0] = 0;

    for(int i = 1; i < dp.size(); ++i) {
        for(int j = 1; j <= sqrt(i); ++j) { /// '<=', not '<', since we want sqrt(i) value to be assessed as well.
            dp[i] = std::min(dp[i], dp[i - j*j] + 1);
        }
    }

    return dp.back();
}