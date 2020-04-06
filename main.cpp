#include <iostream>
#include "sliding-window.h"
#include "tree.h"
#include "greedy.h"

using std::cout;
using std::endl;

int main()
{
    checkInclusion("", "");
    findAnagrams("", "dsf");
    cout << "Hello World!" << endl;
    cout << minCostConnectRopes({8, 4, 6, 12});
    return 0;
}
