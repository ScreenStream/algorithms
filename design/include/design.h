#pragma once

#include <vector>
#include <string>
#include <list>
#include <unordered_map>

class LRUCache {
public:
    explicit LRUCache(int capacity);
    int get(int key);
    void put(int key, int value);
};