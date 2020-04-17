#include "two-heaps.h"

/*
 * Median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value.
 * So the median is the mean of the two middle value.

For example,
[2,3,4], the median is 3

[2,3], the median is (2 + 3) / 2 = 2.5

Design a data structure that supports the following two operations:

void addNum(int num) - Add a integer number from the data stream to the data structure.
double findMedian() - Return the median of all elements so far.


Example:

addNum(1)
addNum(2)
findMedian() -> 1.5
addNum(3)
findMedian() -> 2


Follow up:

1) If all integer numbers from the stream are between 0 and 100, how would you optimize it?
2) If 99% of all integer numbers from the stream are between 0 and 100, how would you optimize it?
 */

/* ANSWERS TO FOLLOW UP QUESTIONS:
 * 1. If all integer numbers from the stream are between 0 and 100, how would you optimize it?

We can maintain an integer array of length 100 to store the count of each number along with a total count.
 Then, we can iterate over the array to find the middle value to get our median.

Time and space complexity would be O(100) = O(1).

2. If 99% of all integer numbers from the stream are between 0 and 100, how would you optimize it?

In this case, we need an integer array of length 100 and a hashmap for these numbers that are not in [0,100].
 Alternatively, we can keep a counter for less_than_hundred and greater_than_hundred.
As we know solution will be definitely in 0-100 we don't need to know those number which are >100 or <0, only count of them will be enough.
 */

void MedianFinder::addNum(int num) {
    if(even) {
        higher.push(num);
        lower.push(higher.top());
        higher.pop();
    } else {
        lower.push(num);
        higher.push(lower.top());
        lower.pop();
    }

    even = !even;
}

double MedianFinder::findMedian() {
    if(even) {
        return lower.top()/2.0 + higher.top()/2.0; /// Divided separately to avoid overflow.
    } else {
        return lower.top();
    }
}