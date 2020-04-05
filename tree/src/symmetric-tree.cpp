#include "tree.h"
#include <stack>

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

bool isSymmetricIterative(TreeNode* root) {
    if(!root) return true;

    std::stack<TreeNode*> nodes;
    nodes.push(root->left);
    nodes.push(root->right);

    while(!nodes.empty()) {
        TreeNode* p = nodes.top();
        nodes.pop();
        TreeNode* q = nodes.top();
        nodes.pop();

        if(!p && !q) continue;

        if (!p || !q || p->val != q->val) return false;
        nodes.push(p->left);
        nodes.push(q->right);
        nodes.push(p->right);
        nodes.push(q->left);
    }

    return true;
}

