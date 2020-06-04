#include "linked-list/linked-list.h"

/*
 * Reverse a singly linked list.

Example:

Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
Follow up:

A linked list can be reversed either iteratively or recursively. Could you implement both?
 */

ListNode* reverseList(ListNode* head) {
    if(!head) {
        return nullptr;
    }

    ListNode* prevHead = nullptr;

    while(head) {
        ListNode* tempNext = head->next;

        head->next = prevHead;
        prevHead = head;

        head = tempNext;
    }

    return prevHead;
}

