#include "union-find.h"

/// AMAZON OA
/// https://leetcode.com/discuss/interview-question/357310

/*
 * There's an undirected connected graph with n nodes labeled 1..n. But some of the edges has been broken
 * disconnecting the graph. Find the minimum cost to repair the edges so that all the nodes are once again
 * accessible from each other.

Input:

n, an int representing the total number of nodes.
edges, a list of integer pair representing the nodes connected by an edge.
edgesToRepair, a list where each element is a triplet representing the pair of nodes between which an edge is
 currently broken and the cost of repearing that edge, respectively (e.g. [1, 2, 12] means to repear an edge
 between nodes 1 and 2, the cost would be 12).
Example 1:

Input: n = 5, edges = [[1, 2], [2, 3], [3, 4], [4, 5], [1, 5]], edgesToRepair = [[1, 2, 12], [3, 4, 30], [1, 5, 8]]
Output: 20
Explanation:
There are 3 connected components due to broken edges: [1], [2, 3] and [4, 5].
We can connect these components into a single component by repearing the edges between nodes 1 and 2, and
 nodes 1 and 5 at a minimum cost 12 + 8 = 20.
Example 2:

Input: n = 6, edges = [[1, 2], [2, 3], [4, 5], [3, 5], [1, 6], [2, 4]], edgesToRepair = [[1, 6, 410], [2, 4, 800]]
Output: 410
Example 3:

Input: n = 6, edges = [[1, 2], [2, 3], [4, 5], [5, 6], [1, 5], [2, 4], [3, 4]],
 edgesToRepair = [[1, 5, 110], [2, 4, 84], [3, 4, 79]]
Output: 79
Related problems:

Min Cost to Connect All Nodes
 */

/// Apply Kruskal's algorithm: Just take existing edges to have 0 cost and broken edges have their given cost.
/// And find minimum spanning tree cost will be the answer.

int minCostRepair(int n, vector<vector<int>>& edges, vector<vector<int>>& newEdges) {
    return 0;
}

/*
 * def minimumCost(self, n: int, edges:List[List[int]] edgesToRepair: List[List[int]]) -> int:

    edgesToRepair.sort(key= lambda x:x[2])
    cost = 0

    # every node is a parent of itself
    rank = [i for i in range(n)]

    # finds parent
    def findParent(p):
        if rank[p] != p:
            rank[p] = findParent(rank[p])
        return rank[p]

    # make a as parent of b
    def union(a, b):
        rank[findParent(b)] = findParent(a)

    # connect the given edges which have no cost
    for con in edges:
        if findParent(con[0]-1) != findParent(con[1]-1) :
            union(con[0]-1, con[1]-1)

    # connect if they have different different parents
    for con in edgesToRepair:
        if findParent(con[0]-1) != findParent(con[1]-1) :
            cost += con[2]
            union(con[0]-1, con[1]-1)

    # find one parent and check if all nodes have the same parent else its not connected
    group = findParent(0)
    for i in range(n):
        if findParent(i) != group:
            return -1

    return cost
 */
