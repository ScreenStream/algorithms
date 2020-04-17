#include "union-find.h"

/// MICROSOFT OA
/// https://leetcode.com/discuss/interview-question/364760/

/*
 * An infrastructure consisting of N cities, numbered from lto N, and M bidirectional roads between them is given.
 * Roads do not intersect apart from at their start and end points (they can pass through underground tunnels to avoid
 * collisions). For each pair of cities directly connected by a road, Into define their network rank as the total number
 * of roads that are connected to either of the two cities.
 *
Write a function that, given two arrays A, B consisting of M integers each and an integer N, where A[] and B[] are cities at the two ends of the i-th road, retums the maximal network rank in the whole infrastructure.
Examples: 1. Given A=If, 2, 3, 31,B = and N= 4, the function .should return 4. The chosen cities may be 2 and 3, and the four roads connected to them are: (2,1), (2.3), (3,1), (3, 4). In the pictures below, the chosen cities and roads connected to them are marked in red.

 */

int maxNetworkRank(vector<int>& A, vector<int>& B, int N) {
    return 0;
}

/*
 * Given : N number of nodes;
m number of edges;
A[i], B[i] node on the edge i;

int[] edgeCount = new int[N];

for(int i=0;i<m;i++){
  edgeCount[A[i]-1]++;
  edgeCount[B[i]-1]++;
}

int maxRank = Integer.MIN_VALUE;
for(int i=0;i<m;i++){
  int rank = edgeCount[A[i]-1] + edgeCount[B[i]-1] -1;
  if(rank > maxRank)
   maxRank = rank;
  }
}
 */