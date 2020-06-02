#include "tree.h"



/*
 * Given a n-ary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
 */

/// BFS Approach
int maxDepth(Node* root) {
    if(!root) {
        return 0;
    }

    int res = 0;
    queue<Node*> nodes;
    nodes.push(root);

    while(!nodes.empty()) {
        int size = nodes.size();

        for(int i = 0; i < size; ++i) {
            auto node = nodes.front();
            nodes.pop();

            for(auto child : node->children) {
                if(child) {
                    nodes.push(child);
                }
            }
        }

        ++res;
    }

    return res;
}

/// Recursive Approach (DFS)
int maxDepth1(Node* root) {
    if(!root) {
        return 0;
    }

    int res = 0;
    for(auto node : root->children) {
        res = max(res, maxDepth(node));
    }

    return 1 + res;
}