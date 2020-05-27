#include "linked-list.h"

using namespace std;

/*
 *Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.

Example:

Input:
[
  1->4->5,
  1->3->4,
  2->6
]
Output: 1->1->2->3->4->4->5->6
 */

ListNode* mergeKLists2(const vector<ListNode*>& lists) {
    if(lists.empty()) {
        return nullptr;
    }

    if(lists.size() == 1) {
        return lists[0];
    }

    if(lists.size() == 2) {
        return mergeTwoLists(lists[0], lists[1]);
    }

    auto mid = lists.size() / 2;
    vector<ListNode*> lower(lists.begin(), lists.begin() + mid); /// This is the proper way to split vectors.
    vector<ListNode*> upper(lists.begin() + mid, lists.end());

    return mergeTwoLists(mergeKLists(lower), mergeKLists(upper));
}

ListNode* mergeKLists(const std::vector<ListNode*>& lists) {
    if(lists.empty()) {
        return nullptr;
    }

    auto cmp = [](auto a, auto b){
        return a->val > b->val;
    };

    priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> pq(cmp);

    for(auto list : lists) {
        while(list) {
            pq.push(list);
            list = list->next;
        }
    }

    auto dummy = new ListNode(0);
    auto head = dummy;

    while(!pq.empty()) {
        dummy->next = pq.top();
        pq.top()->next = nullptr; /// Reset the next pointer of the node, otherwise the solution would TLE due to infinite linked list chain.
        pq.pop();

        dummy = dummy->next;
    }

    return head->next;
}
