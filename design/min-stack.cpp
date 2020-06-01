#include "design.h"

/*
 * Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.


Example:

MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> Returns -3.
minStack.pop();
minStack.top();      --> Returns 0.
minStack.getMin();   --> Returns -2.
 */

/// We always insert new nodes to and pop nodes from the head. Every node also stores the minimum value they have seen up until themselves.
void MinStack::push(int x) {
    if(!head_) {
        head_ = new Node(x, x, nullptr);
    } else {
        head_ = new Node(x, std::min(x, head_->min_), head_);
    }
}

void MinStack::pop() {
    Node* temp = head_;
    head_ = head_->next_;
    delete temp;
}

int MinStack::top() {
    return head_->val_;
}

int MinStack::getMin() {
    return head_->min_;
}


