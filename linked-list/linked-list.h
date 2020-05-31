#pragma once

#include <vector>
#include <string>
#include <queue>
#include <iostream>

#include "nodes.h"

ListNode* reverseList(ListNode* head);
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
ListNode* oddEvenList(ListNode* head);
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
ListNode* mergeKLists(const std::vector<ListNode*>& lists);
RandomNode* copyRandomList(RandomNode* head);
ListNode* removeNthFromEnd(ListNode* head, int n);
ListNode* partition(ListNode* head, int x);

inline ListNode* createList(const std::vector<int>& nums)
{
    auto dummy = new ListNode(0);
    auto head = dummy;

    for(auto num : nums) {
        auto node = new ListNode(num);
        dummy->next = node;

        dummy = dummy->next;
    }

    auto res = head->next;
    delete head;

    return res;
}

inline void printList(ListNode* head)
{
    std::cout << "Printing list with head pointer value: " << head << '\n';

    while(head) {
        std::cout << head->val << ' ';
        head = head->next;
    }

    std::cout << std::endl;
}