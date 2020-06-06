#include "linked-list.h"

/*
 * You’re given the pointer to the head nodes of two linked lists.
 * Compare the data in the nodes of the linked lists to check if they are equal.
 * The lists are equal only if they have the same number of nodes and corresponding nodes contain the same data.
 * Either head pointer given may be null meaning that the corresponding list is empty.
 */

bool compareLists(ListNode* head1, ListNode* head2) {
    if(!head1 && !head2) {
        return true;
    }

    while(head1 && head2) {
        if(head1->val != head2->val) {
            return false;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    return !head1 && !head2;
}