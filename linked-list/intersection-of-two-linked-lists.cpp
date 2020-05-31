#include "linked-list/linked-list.h"

/*
 * Write a program to find the node at which the intersection of two singly linked lists begins.
 *
 * Notes:

If the two linked lists have no intersection at all, return nullptr.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Your code should preferably run in O(n) time and use only O(1) memory.
 */

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if(!headA || !headB) {
        return nullptr;
    }

    ListNode* x = headA;
    ListNode* y = headB;

    while(x != y) {
        x = x ? x->next : headB;
        y = y ? y->next : headA;
    }

    return x;
}
