#include <iostream>

#include "methods.h"
#include "utility.h"

using std::cout;
using std::endl;

int main()
{
    auto list1 = createList({-1,-1,-1});
    auto list2 = createList({-2,-2,-1});

    printList(mergeKLists({list1, list2}));
}
