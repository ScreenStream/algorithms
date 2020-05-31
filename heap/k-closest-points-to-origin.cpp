#include "heap.h"

using namespace std;

/*
 * We have a list of points on the plane.  Find the K closest points to the origin (0, 0).

(Here, the distance between two points on a plane is the Euclidean distance.)

You may return the answer in any order.  The answer is guaranteed to be unique (except for the order that it is in.)



Example 1:

Input: points = [[1,3],[-2,2]], K = 1
Output: [[-2,2]]
Explanation:
The distance between (1, 3) and the origin is sqrt(10).
The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
We only want the closest K = 1 points from the origin, so the answer is just [[-2,2]].
Example 2:

Input: points = [[3,3],[5,-1],[-2,4]], K = 2
Output: [[3,3],[-2,4]]
(The answer [[-2,4],[3,3]] would also be accepted.)


Note:

1 <= K <= points.length <= 10000
-10000 < points[i][0] < 10000
-10000 < points[i][1] < 10000
 */

/// Max heap solution.
/// O(nlogK) time complexity.
vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
    auto cmp = [](const auto& a, const auto& b){
        return (a[0]*a[0] + a[1]*a[1]) < (b[0]*b[0] + b[1]*b[1]);
    };

    priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> pq(cmp);
    for(const auto& point : points) {
        pq.push(point);
        if (pq.size() > K) {
            pq.pop(); /// pop has log complexity, since popping will require heap to be reorganized.
        }
    }

    vector<vector<int>> res;
    while(!pq.empty()) {
        res.push_back(pq.top()); /// top has constant complexity.
        pq.pop();
    }

    return res;
}

/// Min heap solution.
/*
 * This one is of O(n + Klogn) time. The n part is on adding all points to the heap (building a min heap for all the points) and the Klogn part is on fetching the top K points from the heap.
 */
vector<vector<int>> kClosest1(vector<vector<int>>& points, int K) {
    auto cmp = [](const auto& a, const auto& b){
        return (a[0]*a[0] + a[1]*a[1]) > (b[0]*b[0] + b[1]*b[1]);
    };

    priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> pq(cmp);
    for(const auto& point : points) {
        pq.push(point);
    }

    vector<vector<int>> res;
    while(K--) {
        res.push_back(pq.top()); /// top has constant complexity.
        pq.pop(); /// pop has log complexity, since popping will require heap to be reorganized.
    }

    return res;
}

/// partial_sort
/*
 * This solution is of O(nlogK) time. If we ignore the space of the output since that is inevitable, this solution is of O(1) space.
 */
vector<vector<int>> kClosest2(vector<vector<int>>& points, int K) {
    partial_sort(points.begin(), points.begin() + K, points.end(), [](auto& p, auto& q) {
        return p[0] * p[0] + p[1] * p[1] < q[0] * q[0] + q[1] * q[1];
    });

    return vector<vector<int>>(points.begin(), points.begin() + K);
}

/// nth_element
/*
 * This solution is of O(nlogK) time. If we ignore the space of the output since that is inevitable, this solution is of O(1) space.
 */
vector<vector<int>> kClosest3(vector<vector<int>>& points, int K) {
    nth_element(points.begin(), points.begin() + K - 1, points.end(), [](auto& p, auto& q) { /// nth element is at K-1 th index.
        return p[0] * p[0] + p[1] * p[1] < q[0] * q[0] + q[1] * q[1];
    });

    return vector<vector<int>>(points.begin(), points.begin() + K);
}