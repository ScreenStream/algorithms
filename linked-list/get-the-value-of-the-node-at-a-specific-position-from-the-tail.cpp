#include "linked-list.h"

/*
 * You’re given the pointer to the head node of a linked list and a specific position.
 * Counting backwards from the tail node of the linked list, get the value of the node at the given position.
 * A position of 0 corresponds to the tail, 1 corresponds to the node before the tail and so on.
 */

int getNode(ListNode* head, int positionFromTail) {
    auto current = head;
    auto res = head;

    /// IT IS CRUCIAL HERE TO NOT WRITE while(positionFromTail--), since if negative values of  positionFromTail would continue
    /// the while loop as well, causing linked list to be exhausted resulting in segfault.
    while(positionFromTail-- >= 0) {
        current = current->next;
    }

    while(current) {
        current = current->next;
        res = res->next;
    }

    return res->val;
}