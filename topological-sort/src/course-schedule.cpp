#include "topological-sort.h"

using namespace std;

/*
 * There are a total of numCourses courses you have to take, labeled from 0 to numCourses-1.

Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

Given the total number of courses and a list of prerequisite pairs, is it possible for you to finish all courses?



Example 1:

Input: numCourses = 2, prerequisites = [[1,0]]
Output: true
Explanation: There are a total of 2 courses to take.
             To take course 1 you should have finished course 0. So it is possible.
Example 2:

Input: numCourses = 2, prerequisites = [[1,0],[0,1]]
Output: false
Explanation: There are a total of 2 courses to take.
             To take course 1 you should have finished course 0, and to take course 0 you should
             also have finished course 1. So it is impossible.


Constraints:

The input prerequisites is a graph represented by a list of edges, not adjacency matrices. Read more about how a graph is represented.
You may assume that there are no duplicate edges in the input prerequisites.
1 <= numCourses <= 10^5
 */

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> adjList(numCourses);
    vector<int> inDegrees(numCourses);

    for(auto& p : prerequisites) {
        adjList[p[1]].push_back(p[0]);
        ++inDegrees[p[0]];
    }

    queue<int> q;
    for(int i = 0; i < numCourses; ++i) {
        if(inDegrees[i] == 0) {
            q.push(i);
        }
    }

    while(!q.empty()) {
        int current = q.front();
        q.pop();
        --numCourses;

        for(auto& next : adjList[current]) {
            if(--inDegrees[next] == 0) {
                q.push(next);
            }
        }
    }

    return numCourses == 0;
}

