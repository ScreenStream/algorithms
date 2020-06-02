#pragma once

#include <vector>
#include <string>

using std::vector;
using std::string;

struct ListNode;

ListNode* insertionSortList(ListNode* head);
ListNode* sortList(ListNode* head);
vector<int> pancakeSort(vector<int>& A);
vector<int> countSmaller(vector<int>& nums);
string largestNumber(vector<int>& nums);