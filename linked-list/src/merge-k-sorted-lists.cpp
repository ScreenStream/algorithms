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

ListNode* mergeKLists(vector<ListNode*>& lists) {
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

