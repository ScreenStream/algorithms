#include "strongly-connected-components.h"

using namespace std;

/*
 * There are n servers numbered from 0 to n-1 connected by undirected server-to-server connections
 * forming a network where connections[i] = [a, b] represents a connection between servers a and b.
 * Any server can reach any other server directly or indirectly through the network.

A critical connection is a connection that, if removed, will make some server unable to reach some other server.

Return all critical connections in the network in any order.
 */

void dfs(int at, int from, int id, vector<int>& lowLinks, vector<int>& ids, vector<bool>& visited, vector<vector<int>>& adjList, vector<vector<int>>& res)
{
    visited[at] = true;
    lowLinks[at] = id;
    ids[at] = id;
    id++;

    for(int to : adjList[at]) {
        if(to == from) { /// This early continue is crucial. This line will prevent dfs going back and forth between two visited adjacent nodes.
                         /// 0 --> 1 --> 0; 1 must not go back to 0 in the last step. This line ensures that. Otherwise, lowLink value would be updated below in else statement.
            continue;
        }

        if(!visited[to]) {
            dfs(to, at, id, lowLinks, ids, visited, adjList, res);
            lowLinks[at] = min(lowLinks[at], lowLinks[to]);

            if(ids[at] < lowLinks[to]) {
                res.push_back({at, to});
            }
        } else { /// Backedge encountered.
            lowLinks[at] = min(lowLinks[at], ids[to]);
        }
    }
}

/*
 * Time Complexity: O(E + V) –> One pass, linear time solution
 *
 * Space Complexity: O(N)
 */
vector<vector<int>> criticalConnections(int n, const vector<vector<int>>& connections)
{
    vector<vector<int>> res;

    vector<vector<int>> adjList(n);
    vector<bool> visited(n, false);
    vector<int> lowLinks(n, 0);
    vector<int> ids(n, 0);

    /// Building adjacency list representation of the graph from the edge list representation.
    /// Adjaceny list representation is useful when we want to deal with neighbor nodes of a node.
    for(auto connection : connections) {
        int from = connection[0];
        int to = connection[1];

        adjList[from].push_back(to);
        adjList[to].push_back(from); /// For UNDIRECTED graphs, both from-to and to-from is included in the adjacency list.
    }

    for(int i = 0; i < n; ++i) {
        if(!visited[i]) {
            dfs(i, -1, 1, lowLinks, ids, visited, adjList, res);
        }
    }

    return res;
}