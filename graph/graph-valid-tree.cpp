#include "graph.h"



/*
 * Given n nodes labeled from 0 to n - 1 and a list of undirected edges (each edge is a pair of nodes),
 * write a function to check whether these edges make up a valid tree.
For example:
Given n = 5 and edges = [[0, 1], [0, 2], [0, 3], [1, 4]], return true.
Given n = 5 and edges = [[0, 1], [1, 2], [2, 3], [1, 3], [1, 4]], return false.
Note: you can assume that no duplicate edges will appear in edges. Since all edges are undirected, [0, 1]
 is the same as [1, 0]and thus will not appear together in edges.

Thought process:
A tree is a graph that doesn't have a cycle.
BFS. When a node is polled from queue, iterate through its neighbors. If any of them is visited but not the node's parent,
 there is a cycle.
If there are no edges, then the graph is a tree only if it has only one node.
Build graph. Use a map of int -> list of int. Iterate through the edge list and add nodes into map.
BFS. Poll a node from queue. Iterate through its neighbors. If queue contains a neighbor, that means
 there is a cycle in the graph. Return false. Otherwise, if the neighbor is not visited, offer it to queue.
 */

bool validTree(int n, vector<vector<int>> edges) {
    return false;
}