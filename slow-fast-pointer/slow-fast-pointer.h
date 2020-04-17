#pragma once

#include <vector>

using std::vector;

struct TreeNode;
struct ListNode;

bool isHappy(int n);
ListNode* middleNode(ListNode* head);
ListNode *detectCycle(ListNode *head);
bool hasCycle(ListNode *head);
TreeNode* sortedListToBST(ListNode* head);
bool circularArrayLoop(vector<int>& nums);
ListNode* removeNthFromEnd(ListNode* head, int n);
void reorderList(ListNode* head);
ListNode* sortList(ListNode* head);
bool isPalindrome(ListNode* head);