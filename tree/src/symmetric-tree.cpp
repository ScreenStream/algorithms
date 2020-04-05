#include "tree.h"

/*
 * Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3


But the following [1,2,2,null,3,null,3] is not:

    1
   / \
  2   2
   \   \
   3    3
 */

bool isSymmetricHelper(TreeNode* p, TreeNode* q)
{
    if(!p || !q)
        return p == q;
    if(p->val != q->val)
        return false;
    return isSymmetricHelper(p->left, q->right) && isSymmetricHelper(p->right, q->left);
}

/// Here, it is natural to create a helper method for recursive calls. The reason is that our recursive calls should take 2 inputs that correspond to
/// left and right tree pointers; but this method only takes 1 input which is the ROOT of the tree.
bool isSymmetric(TreeNode* root) {
    if(!root) return true;
    return isSymmetricHelper(root->left, root->right);
}

/// In below solution, we are also storing null pointers in the stack for cleaner code!
/// This approach is depth first since it will first go all the way to bottom on left and right nodes, checking along the way.
bool isSymmetricIterativeStack(TreeNode* root) {
    if(!root) return true;

    std::stack<TreeNode*> nodes;
    nodes.push(root->left);
    nodes.push(root->right);

    while(!nodes.empty()) {
        TreeNode* p = nodes.top();
        nodes.pop();
        TreeNode* q = nodes.top();
        nodes.pop();

        /// If top 2 items in the stack are null pointers we just skip this iteration.
        if(!p && !q) continue;

        if (!p || !q) return false;
        if (p->val != q->val) return false;
        /// Order of below operations is crucial.
        nodes.push(p->left);
        nodes.push(q->right);
        nodes.push(p->right);
        nodes.push(q->left);
    }

    return true;
}

/// Symmetric property is checked row by row. That is why this is breadth first approach.
bool isSymmetricIterativeQueue(TreeNode* root) {
    if (!root) return true;

    std::queue<TreeNode*> nodes;
    nodes.push(root->left);
    nodes.push(root->right);

    while (!nodes.empty()) {
        TreeNode* p = nodes.front();
        nodes.pop();
        TreeNode* q = nodes.front();
        nodes.pop();

        if(!p && !q) continue;

        if(!p || !q) return false;
        if (p->val != q->val) return false;

        nodes.push(p->left);
        nodes.push(q->right);
        nodes.push(p->right);
        nodes.push(q->left);
    }

    return true;
}

