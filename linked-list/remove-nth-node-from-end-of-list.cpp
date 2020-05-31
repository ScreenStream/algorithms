#include "linked-list.h"

/*
 * Given a linked list, remove the n-th node from the end of list and return its head.

Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
Note:

Given n will always be valid.

Follow up:

Could you do this in one pass?
 */

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* ptr1 = head;
    ListNode* ptr2 = head;

    while(n--) {
        ptr2 = ptr2->next;
    }

    while(ptr2) {
        ptr2 = ptr2->next;
        ptr1 = ptr1->next;
    }

    ptr1->next = ptr1->next->next;
    delete ptr1;

    return head;
}