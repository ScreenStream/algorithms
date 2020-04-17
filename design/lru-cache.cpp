#include "design.h"



/*
 * In this design, high priority keys are stored towards the end of the list.
 * The closer key close to the end, the higher priority it has. So, lower priority items will be popped from the beginning of the list.
 */
LRUCache::LRUCache(int capacity) {
    cap_ = capacity;
}

int LRUCache::get(int key) {
    auto it = map.find(key);

    if(it != map.end()) {
        q.splice(q.end(), q, it->second.second);
        return map[key].first;
    } else {
        return -1;
    }
}

void LRUCache::put(int key, int value) {
    if(!map.count(key)) {
        if(map.size() == cap_) {
            int item = q.front();
            q.pop_front();
            map.erase(item);
        }

        q.push_back(key);
        map.insert({key, {value, std::prev(q.end())}});
    } else {
        q.splice(q.end(), q, map[key].second);
        map[key].first = value;
    }
}