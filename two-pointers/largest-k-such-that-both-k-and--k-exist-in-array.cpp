#include "two-pointers.h"

/// MICROSOFT OA
/// https://leetcode.com/discuss/interview-question/406031/

/*
 * Write a function that, given an array A of N integers, returns the lagest integer K > 0 such that both
 * values K and -K exist in array A. If there is no such integer, the function should return 0.

Example 1:

Input: [3, 2, -2, 5, -3]
Output: 3
Example 2:

Input: [1, 2, 3, -4]
Output: 0
 */

int largestNum(vector<int>& nums) {
    return 0;
}

/*
 * public static void main(String[] args) {
	int[] nums1 = { 3, 2, -2, 5, -3 };
	int[] nums2 = { 1, 2, 3, -4 };
	System.out.println(largestNum(nums1));
	System.out.println(largestNum(nums2));
	System.out.println("-------------------------------------");
	System.out.println(largestNum2(nums1));
	System.out.println(largestNum2(nums2));
}

private static int largestNum(int[] nums) {
	int res = 0;
	Set<Integer> set = new HashSet<>();
	for(int i=0;i<nums.length;i++) {
		set.add(-nums[i]);
		if(set.contains(nums[i])) {
			res = Math.max(res, Math.abs(nums[i]));
		}
	}
	return res;
}

private static int largestNum2(int[] nums) {
	int res = 0;
	Arrays.sort(nums);
	int l = 0, r = nums.length -1;
	while(l < r) {
		int sum = nums[l] + nums[r];
		if(sum == 0) {
			res = Math.max(res, Math.max(nums[l], nums[r]));
			l++;
			r--;
		}
		else if(sum < 0) {
			l++;
		}else {
			r--;
		}
	}
	return res;
}
 */

/*
 * Approaches:

Sorting + Two Pointers O(nlogn)
Array: [3,2,-2,5,-3]
After Sorting:[-3,-2,2,3,5]
Keep two pointers on the 0th and the last position respectively,
while(left<right) // To avoid zero's case
1)if the absolute values match, return the value
2) right--, if right's absolute value is greater than left's value
3)left++, if left's absolute value is greater than right's value

Extra Space O(n)
Use an Array/HashMap to keep the occurences of the element, save the absolute value in the array/hashmap.
 whenever you already have your absolute value in the map, compare it with the ans variable and take the maximum
 out of the two.
 */