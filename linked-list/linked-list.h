#pragma once

#include <vector>
#include <string>
#include <queue>
#include <iostream>

using std::vector;
using std::string;
using std::queue;
using std::priority_queue;
using std::greater;

#include "nodes.h"

ListNode* reverseList(ListNode* head);
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
ListNode* addTwoNumbersII(ListNode* l1, ListNode* l2);
ListNode* oddEvenList(ListNode* head);
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
ListNode* mergeKLists(const std::vector<ListNode*>& lists);
RandomNode* copyRandomList(RandomNode* head);
ListNode* removeNthFromEnd(ListNode* head, int n);
ListNode* partition(ListNode* head, int x);
ListNode* reverseBetween(ListNode* head, int m, int n);
ListNode* rotateRight(ListNode* head, int k);
ListNode* swapPairs(ListNode* head);
ListNode* reverseKGroup(ListNode* head, int k);
ListNode* deleteDuplicates(ListNode* head);
ListNode* deleteDuplicatesII(ListNode* head);
ListNode* removeElements(ListNode* head, int val);
bool isPalindrome(ListNode* head);
ListNode* plusOne(ListNode* head);
std::vector<ListNode*> splitListToParts(ListNode* root, int k);
MultilevelDoublyListNode* flatten(MultilevelDoublyListNode* head);
int numComponents(ListNode* head, std::vector<int>& G);
ListNode* removeZeroSumSublists(ListNode* head);