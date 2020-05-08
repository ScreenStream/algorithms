#include "linked-list.h"

using namespace std;

/*
 * You are given two non-empty linked lists representing two non-negative integers.
 * The digits are stored in reverse order and each of their nodes contain a single digit.
 * Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
 */

/// O(n) space, O(n) time.
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int c = 0; /// carry. Denote carries with c for convention, denote digits you are summing with a and b for convention.
    vector<ListNode*> nodes;

    while(l1 || l2 || c) {
        int a = 0;
        int b = 0;

        if(l1) {
            a = l1->val;
            l1 = l1->next;
        }

        if(l2) {
            b = l2->val;
            l2 = l2->next;
        }

        int sum = a + b + c;
        int new_digit = sum % 10;

        auto new_node = new ListNode(new_digit);
        nodes.push_back(new_node);

        c = sum / 10;
    }

    for(int i = 0; i < nodes.size() - 1; ++i) {
        nodes[i]->next = nodes[i + 1];
    }

    return nodes[0];
}

/// Using sentinel node, instead of a vector.
ListNode* addTwoNumbers1(ListNode* l1, ListNode* l2) {
    int c = 0;
    auto start_node = new ListNode(INT_MIN);
    auto sentinel = start_node;

    while(l1 || l2 || c) {
        int a = 0;
        int b = 0;

        if(l1) {
            a = l1->val;
            l1 = l1->next;
        }
        if(l2) {
            b = l2->val;
            l2 = l2->next;
        }

        int sum = a + b + c;
        int new_digit = sum % 10;

        auto new_node = new ListNode(new_digit);
        start_node->next = new_node;
        start_node = start_node->next;

        c = sum / 10;
    }

    return sentinel->next;
}