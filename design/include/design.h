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
