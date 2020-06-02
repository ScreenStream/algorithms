#include "tree.h"

using namespace std;

/*
 * Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).

The binary search tree is guaranteed to have unique values.



Example 1:

Input: root = [10,5,15,3,7,null,18], L = 7, R = 15
Output: 32
Example 2:

Input: root = [10,5,15,3,7,13,18,1,null,6], L = 6, R = 10
Output: 23


Note:

The number of nodes in the tree is at most 10000.
The final answer is guaranteed to be less than 2^31.
 */


///////

/*
 * Analysis:

All 4 methods below will DFS traverse all nodes in worst case, and if we count in the recursion trace space cost, the complexities are as follows:

Time: O(n), space: O(h), where n is the number of total nodes, h is the height of the tree. (h = logn)
 We could argue that the space complexity would become O(n) in the case of skewed tree (extremely unbalanced, max depth case).
 */


int rangeSumBST(TreeNode* root, int L, int R) {
    if(!root) {
        return 0;
    }

    if(root->val < L) {
        return rangeSumBST(root->right, L, R);
    } else if(root->val > R) {
        return rangeSumBST(root->left, L, R);
    }

    return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
}

/// Another style.
int rangeSumBST2(TreeNode* root, int L, int R) {
    if(!root) {
        return 0;
    }

    int sum = 0;

    if(root->val > L) {
        sum += rangeSumBST(root->left, L, R);
    }
    if(root->val < R) {
        sum += rangeSumBST(root->right, L, R);
    }
    if(root->val >= L && R >= root->val) {
        sum += root->val;
    }

    return sum;
}

/// Another style of recursion.
int rangeSumBST1(TreeNode* root, int L, int R) {
    if(!root) {
        return 0;
    }

    return (L <= root->val && R >= root->val ? root->val : 0) + rangeSumBST(root->right, L, R) + rangeSumBST(root->left, L, R);
}

/// Iterative version
int rangeSumBST3(TreeNode* root, int L, int R) {
    stack<TreeNode*> nodes;
    nodes.push(root);
    int sum = 0;

    while(!nodes.empty()) {
        auto node = nodes.top();
        nodes.pop();

        if(!node) {
            continue;
        }

        if(node->val > L) {
            nodes.push(node->left);
        }
        if(node->val < R) {
            nodes.push(node->right);
        }
        if(L <= node->val && R >= node->val) {
            sum += node->val;
        }
    }

    return sum;
}