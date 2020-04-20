#include "two-pointers.h"

int maxArea(std::vector<int>& height)
{
    int res = 0;
    int i = 0;
    int j = height.size() - 1;

    while(i < j) {
        int h = std::min(height[i], height[j]);
        res = std::max(res, (j - i) * h);

        while(i < j && height[i] <= h) {
            ++i;
        }

        while(i < j && height[j] <= h) {
            --j;
        }
    }

    return res;
}
