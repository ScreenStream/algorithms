#include "two-pointers.h"

/*
 * Given two arrays, write a function to compute their intersection.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Note:

Each element in the result should appear as many times as it shows in both arrays.
The result can be in any order.






Follow up:

Q1) What if the given array is already sorted? How would you optimize your algorithm?
A1) I would use this algorithm. (There is another algorithm for solving this problem using hashmap without sorting.)

Q2) What if nums1's size is small compared to nums2's size? Which algorithm is better?

Q3) What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?
A3)
 - If only nums2 cannot fit in memory, put all elements of nums1 into a HashMap, read chunks of array that fit into the memory, and record the intersections.
 - If both nums1 and nums2 are so huge that neither fit into the memory, sort them individually (external sort), then read 2 elements from each array at
a time in memory, record intersections.

 */

std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());

    int i = 0;
    int j = 0;
    std::vector<int> res;

    while(i < nums1.size() && j < nums2.size()) {
        if(nums1[i] == nums2[j]) {
            res.push_back(nums1[i]);
            ++i;
            ++j;
        } else if(nums1[i] < nums2[j]) {
            ++i;
        } else {
            ++j;
        }
    }

    return res;
}

