#include "arr.h"

/// MICROSOFT OA
/// https://leetcode.com/discuss/interview-question/451422/

/*
 * You are given two arrays A and B consisting of N integers each. ndex K is named fairif the four sums
 * (A[0] + AIK-1]), (AN + + A[N-11), (BIG] + + and (MK] + + BIN-1]) are all equal. In ether words,
 * K is the index where the two arrays, A and B, can be split (into two non-empty arrays each) in such a way
 * that the sums of he resulting arrays' elements are equal.
for example, given arrays A = (4,1, 0, 31 and B =1-2, 5, 0, 31 index K = 2 is fair. The sums of the subarrays are all equal: 4+ (-1) = 3,0 + 3 = c, -2 + 5 = 3 and 0 + 3 = 3. On the other hand, index K. 1 is not fair, the sums of the subarrays are:4, (-1). 0 + 3 = and 5 + 0 + 3 = 8.
Write a function:
which, given two arrays of integers A and B. returns the number of fairindexes. amples: . Given A = [4,1,0,3] and B = (-2, 5,0, 31, your function should return 2. The fair indexes are 2 and 3. In both cases, the sums of elements the subarrays are equal to 3. Given A = [2, -2, -3, 31 and B = /0,0,4,41 your function should retum 1. The only fair index is 2. Index 4 is not fairas the subarrays ontaining indexes from K to N - 1 would be empty.
c. Given A = [4,-1,0,3/and B = [-2, 6,0,41 your function should return O.
 There are no fair indexes.
 Given A = [3, 2, 6] and B = [4,1, 61 your function should return O. • .
 Given A = [1,4, 2,-2, B = [7,-2,-2, 2, 51 your function should return 2.
 The fair indexes are 2 and 4. rite an efficient algorithm for the following assumptions:
 N is an integer within the range [2..100,000]
 each element of arrays A, B is an integer withinthe range [-1,000,000,000..1,000,000,000].

 */

int getNumOfFairIndexes(vector<int>& A, vector<int>& B) {
    return 0;
}

/*
 * public static void main(String[] args) {
	int[] A1 = {4,-1,0,3}, B1 = {-2, 5, 0 ,3};
	int[] A2 = {2,-2,-3,3}, B2 = {0,0,4,-4};
	int[] A3 = {4,-1,0,3}, B3 = {-2,6,0,4};
	int[] A4 = {3,2,6}, B4 = {4,1,6};
	int[] A5 = {1,4,2,-2,5}, B5 = {7,-2,-2,2,5};
	System.out.println(getNumOfFairIndexes(A1, B1));
	System.out.println(getNumOfFairIndexes(A2, B2));
	System.out.println(getNumOfFairIndexes(A3, B3));
	System.out.println(getNumOfFairIndexes(A4, B4));
	System.out.println(getNumOfFairIndexes(A5, B5));
}

private static int getNumOfFairIndexes(int[] A, int[] B) {
	int res = 0, sumA = 0, sumB = 0;
	for(int i=0;i<A.length;i++) {
		sumA += A[i];
		sumB += B[i];
	}
	int tmpA = 0, tmpB = 0;
	for(int i=0;i<A.length-1;i++) {
		tmpA += A[i];
		tmpB += B[i];
		if(sumA == 2 * tmpA && sumB == 2 * tmpB && tmpA == tmpB)
			res++;
	}
	return res;
}
 */