#include "heap.h"

/// MICROSOFT OA
/// https://leetcode.com/discuss/interview-question/430981/

/*
 * Give you one sorted array, please put them into n buckets, we need to ensure we get n sub array with approximately
 * equal weights.
Example;
input {1, 2, 3, 4, 5} n = 3
output [[[5],[1,4],[2,3]];
 */

/*
 * similar to https://leetcode.com/problems/partition-to-k-equal-sum-subsets/,
 * The difficulty is to handle approximately condition
 */

vector<vector<int>> part(vector<int>& T, int n) {
    return {};
}

/*
 *     public static List<List<Integer>> part(int[] T, int n) {
		int[] sums = new int[n];
		PriorityQueue<Integer> pq = new PriorityQueue<>(new Comparator<Integer>() {
			public int compare(Integer a, Integer b) {
				return sums[a.intValue()] - sums[b.intValue()];
			}
		});
		List<List<Integer>> result = new ArrayList<>();
		for (int i = 0; i < n; i++) {
			result.add(new ArrayList<>());
			pq.add(i);
		}

		for (int i = T.length - 1; i >= 0; i--) {
			int c = pq.poll();
			result.get(c).add(T[i]);
			sums[c] += T[i];
			pq.add(c);
		}

		return result;
	}


	public static void main(String[] args) {
		List<List<Integer>> result = part(new int[] {1,2,3,4,5,6,7,8,9,10}, 3);
		System.out.println(result);
	}
 */