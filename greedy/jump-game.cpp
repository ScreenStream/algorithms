#include "greedy.h"



/*
 * Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.

Example 1:

Input: [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum
             jump length is 0, which makes it impossible to reach the last index.
 */

bool canJump(vector<int>& nums) {
    int pos = 0;

    for(int i = 0; i <= pos; ++i) {
        pos = std::max(pos, i + nums[i]);

        if(pos >= nums.size() - 1) {
            return true;
        }
    }

    return false;
}

/// DP Approach.
bool canJump1(vector<int>& nums) {
    int n = nums.size();
    vector<bool> jump(n,false);
    jump[n-1]=true;

    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=nums[i] && i+j<n;j++)
        {
            if(jump[i+j]==true)
            {
                jump[i]=true;
                break;
            }
        }
    }

    return jump[0];
}