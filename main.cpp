#include <iostream>
#include "sliding-window.h"
#include "tree.h"
#include "greedy.h"
#include "bitwise.h"
#include "backtracking.h"
#include "dfs.h"
#include "bfs.h"
#include "arr.h"
#include "str.h"
#include "dp.h"
#include "heap.h"
#include "design.h"

#include <list>

using std::cout;
using std::endl;

int main()
{
    auto cache = LRUCache(2);
    cache.put(2,1);
    cache.put(1,1);
    cache.put(2,3);
    cache.put(4,1);
    cout << cache.get(1) << endl;
    cout << cache.get(2) << endl;
    return 0;
}
