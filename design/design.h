#pragma once

#include <vector>
#include <string>
#include <list>
#include <unordered_map>

class LRUCache {
    std::unordered_map<int, std::pair<int, std::list<int>::iterator>> map;
    std::list<int> q;
    int cap_;
public:
    explicit LRUCache(int capacity);
    int get(int key);
    void put(int key, int value);
};

class MinStack {
public:
    MinStack() = default;
    void push(int x);
    void pop();
    int top();
    int getMin();
private:
    struct Node {
        Node(int val, int min, Node* next)
                : val_{val}
                , min_{min}
                , next_{next}
        {}

        int val_;
        int min_;
        Node* next_;
    };

    Node* head_ = nullptr;
};

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue();

    /** Push element x to the back of queue. */
    void push(int x);

    /** Removes the element from in front of queue and returns that element. */
    int pop();

    /** Get the front element. */
    int peek();

    /** Returns whether the queue is empty. */
    bool empty();
};

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack();

    /** Push element x onto stack. */
    void push(int x);

    /** Removes the element on top of the stack and returns that element. */
    int pop();

    /** Get the top element. */
    int top();

    /** Returns whether the stack is empty. */
    bool empty();
};

class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet();

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val);

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val);

    /** Get a random element from the set. */
    int getRandom();
};

class Trie {
public:
    /** Initialize your data structure here. */
    Trie();

    /** Inserts a word into the trie. */
    void insert(std::string word);

    /** Returns if the word is in the trie. */
    bool search(std::string word);

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(std::string prefix);
};

class SnapshotArray {
public:
    SnapshotArray(int length);
    void set(int index, int val);
    int snap();
    int get(int index, int snap_id);
};