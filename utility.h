#pragma once

#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;
using std::string;

inline ListNode* createList(const vector<int>& nums)
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
    cout << "Printing list with head pointer value: " << head << '\n';

    while(head) {
        cout << head->val << ' ';
        head = head->next;
    }

    cout << endl;
}
