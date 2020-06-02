#include "str.h"

/// MICROSOFT OA
/// https://leetcode.com/discuss/interview-question/558379/

/*
 * costs of deletions index-wise --> input array
 *
 */

int getMinCost(string s, vector<int>& nums) {
    return 0;
}

/*
 * private static int getMinCost(String s, int[] nums) {
	int res = 0;
	int sum = nums[0], max = nums[0];
	for(int i=1;i<s.length();i++) {
		if(s.charAt(i) != s.charAt(i-1)) {
			res += sum - max;
			sum = nums[i];
			max = nums[i];
		}else {
			sum += nums[i];
			max = Math.max(max, nums[i]);
		}
	}
	res += sum - max;
	return res;
}
 */