#include "tree.h"

/*
 * Given a singly linked list where elements are sorted in ascending order, convert it to a height balanced BST.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
 */

TreeNode* helper(ListNode* head, ListNode* tail)
{
    if(head == tail) {
        return nullptr;
    }

    auto slow = head;
    auto fast = head;

    while(fast != tail && fast->next != tail) {
        slow = slow->next;
        fast = fast->next->next;
    }

    auto node = new TreeNode(slow->val);
    node->left = helper(head, slow);
    node->right = helper(slow->next, tail);
    return node;
}

/*
 * The time complexity of the solution is O(nlogn) since you have to traverse the sub-list in each recursive call.
 */
TreeNode* sortedListToBST(ListNode* head) {
    if(!head) {
        return nullptr;
    }

    return helper(head, nullptr);
}
