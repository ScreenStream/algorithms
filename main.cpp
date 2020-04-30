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
#include "maths.h"
#include "graph.h"

#include <list>

using std::cout;
using std::endl;

int main()
{
//    auto n3 = new TreeNode(3);
//    auto n5 = new TreeNode(5);
//    auto n1 = new TreeNode(1);
//    auto n6 = new TreeNode(6);
//    auto n2 = new TreeNode(2);
//    auto n0 = new TreeNode(0);
//    auto n8 = new TreeNode(8);
//    auto n7 = new TreeNode(7);
//    auto n4 = new TreeNode(4);
//
//    n3->left = n5;
//    n3->right = n1;
//    n5->left = n6;
//    n5->right = n2;
//    n1->left = n0;
//    n1->right = n8;
//    n2->left = n7;
//    n2->right = n4;
//
//    auto m  = distanceK(n3, n5, 2);
////    for(auto i : m) {
////        cout << i << endl;
////    }

//    longestPalindromeSubseq("bbbab");
//    cout << gcd(36, 60) << endl;
//    cout << lcm(36, 60) << endl;
//    auto m = criticalConnections(4, {{0,1},{1,2},{2,0},{1,3}});
//    for(auto i : m) {
//        for(auto j : i)
//            cout << j << endl;
//    }
    //    auto n3 = new TreeNode(3);
    auto n1 = new TreeNode(1);
    auto n2 = new TreeNode(2);
    auto n3 = new TreeNode(3);
    auto n5 = new TreeNode(5);

    n1->left = n2;
    n1->right = n3;
    n2->right = n5;

    std::cout << isValidSequence(n1, {1,2,5});
//std::vector<int> m{1, 2,3};
//    std::vector<int> n{1, 2,3};
//    std::cout << std::boolalpha << (m == n) << std::endl;
    return 0;
}
