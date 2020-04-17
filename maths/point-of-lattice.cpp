#include "maths.h"

/// AMAZON OA
/// https://leetcode.com/discuss/interview-question/396418/

/*
 * Alice lives on a lattice. The lattice consists of points that have integer coordinates. One day Alice decided
 * she wants to go for a walk. She starts at lattice point A and goes straight to lattice point B.
 * After reaching B, she turns 90 degrees to the right and moves straight in that direction.
 * What is the first lattice point that Alice will reach after the turn?
 *
The points A and B have coordinates (AX, AY) and (BX, BY) respectively. You can assume that A and B are distinct.
Write a function:
class Solution { public String solution(int AX, int AY, int BX, int BY); )
that, given four integers AX, AY, BX and BY, finds the coordinates of the first lattice point that Alice will reach after turning right. It must return a string with two coordinates separated with a comma, without any spaces.
For example, given:
AX = -1 AY = 3 BX = 3 BY = 1
the function should return " 2 , -1" . the function should return "2 , -1".

 */

vector<int> lattice(int ax, int ay, int bx, int by) {
    return {};
}

/*
 *     int[] lattice(int ax, int ay, int bx, int by) {
        int dx = bx - ax, dy = by - ay;

        // rotate 90
        int rx = dy, ry = -dx;

        // reduce
        int gcd = Math.abs(gcd(rx, ry));
        rx /= gcd;
        ry /= gcd;

        return new int[]{bx + rx, by + ry};
    }

    private int gcd(int x, int y) {
        return y == 0 ? x : gcd(y, x % y);
    }
 */