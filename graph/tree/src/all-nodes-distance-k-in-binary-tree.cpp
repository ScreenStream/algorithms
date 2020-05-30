#include "tree.h"
#include <iostream>

using namespace std;

/*
 * We are given a binary tree (with root node root), a target node, and an integer value K.

Return a list of the values of all nodes that have a distance K from the target node.  The answer can be returned in any order.



Example 1:

Input: root = [3,5,1,6,2,0,8,null,null,7,4], target = 5, K = 2

Output: [7,4,1]

Explanation:
The nodes that are a distance 2 from the target node (with value 5)
have values 7, 4, and 1.

Note that the inputs "root" and "target" are actually TreeNodes.
The descriptions of the inputs above are just serializations of these objects.

Note:

The given tree is non-empty.
Each node in the tree has unique values 0 <= node.val <= 500.
The target node is a node in the tree.
0 <= K <= 1000.
 */
int getDistance(TreeNode* root, TreeNode* target, unordered_map<TreeNode*, int>& distances)
{
    if(!root) {
        return -1;
    }

    if (root == target) {
        distances[root] = 0;
        return 0;
    }

    int l = getDistance(root->left, target, distances);
    if(l >= 0) {
        distances[root] = l + 1;
        return l + 1;
    }

    int r = getDistance(root->right, target, distances);
    if(r >= 0) {
        distances[root] = r + 1;
        return r + 1;
    }

    return INT_MIN; /// This return statement is here just to satisfy compiler.
}

void traverse(TreeNode* root, TreeNode* target, int K, unordered_map<TreeNode*, int>& distances, int length, vector<int>& res)
{
    if (!root)
        return;
    if (distances.count(root))
        length = distances[root];
    if (length == K)
        res.push_back(root->val);

    traverse(root->left, target, K, distances, length + 1, res);
    traverse(root->right, target, K, distances, length + 1, res);
}

/*
 * As we know, if the distance from a node to target node is k, the distance from its child to the target node is k + 1 unless
 * the child node is closer to the target node which means the target node is in it's subtree.

To avoid this situation, we need to travel the tree first to find the path from root to target, to:

store the value of distance in hashmap from the all nodes in that path to target
Then we can easily use dfs to travel the whole tree. Every time when we meet a tree node which has already stored in map,
 use the stored value in hashmap instead of the value from its parent node.
 */

vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
    unordered_map<TreeNode*, int> distances;
    getDistance(root, target, distances);
    for(auto i : distances) {
        cout << i.first->val << " " << i.second << endl;
    }
    vector<int> res;
    traverse(root, target, K, distances, distances[root], res);

    return res;
}



/// SOLUTION 2:
/*
 * DFS to build the back edges ( backEdge[child] = parent )
BFS from the target as a center until the distance is K.
 */

void dfs(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &backEdge, TreeNode* target){
    if(!root || (root == target)) return;

    if(root->left){
        backEdge[root->left] = root;
        dfs(root->left, backEdge, target);
    }
    if(root->right){
        backEdge[root->right] = root;
        dfs(root->right, backEdge, target);
    }
}

vector<int> distanceK2(TreeNode* root, TreeNode* target, int K) {
    unordered_map<TreeNode*, TreeNode*> backEdge;
    unordered_set<TreeNode*> visited;
    vector<int> res;
    dfs(root, backEdge, target);
    queue<TreeNode*> que;
    que.push(target);
    while(!que.empty() && K >= 0){
        int s = que.size();
        while(s--){
            TreeNode* cur = que.front();
            int val = cur->val; que.pop();
            visited.insert(cur);
            if(K == 0) res.push_back(val);
            if(!visited.count(backEdge[cur]) && backEdge[cur]) que.push(backEdge[cur]);
            if(!visited.count(cur->left) && cur->left) que.push(cur->left);
            if(!visited.count(cur->right) && cur->right) que.push(cur->right);
        }
        K--;
    }
    return res;
}

/// SOLUTION 3:
/*
 * Explanation
A recursive dfs function connect help to build up a map conn.
The key of map is node's val and the value of map is node's connected nodes' vals.
Then we do N times bfs search loop to find all nodes of distance K.

 So we basically converted the tree into a graph using adjacency list representation.
 */

void preorder(TreeNode* p, TreeNode* parent, unordered_map<int,unordered_set<int>>& dict) {
    if (!p) {
        return;
    }

    if (parent) {
        dict[p->val].insert(parent->val);
        dict[parent->val].insert(p->val);
    }

    if (p->left) {
        preorder(p->left, p, dict);
    }
    if (p->right) {
        preorder(p->right, p, dict);
    }
}

vector<int> distanceK3(TreeNode* root, TreeNode* target, int K) {
    unordered_map<int,unordered_set<int>> dict;
    preorder(root, nullptr, dict);
    vector<int> res, aux;
    res.push_back(target->val);
    unordered_set<int> vis;
    vis.insert(target->val);

    for (int d = 0; d < K; d++) {
        for (auto u : res) {
            for (auto v : dict[u]) {
                if (vis.count(v)) {
                    continue;
                }
                vis.insert(v);
                aux.push_back(v);
            }
        }
        res.clear();
        swap(res, aux);
    }
    return res;
}