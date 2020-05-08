#pragma once

#include <vector>
#include <string>

struct ListNode {
     int val;
     ListNode *next;
     explicit ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head);
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);