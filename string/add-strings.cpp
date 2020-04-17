#include "str.h"



/*
 * Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.

Note:

The length of both num1 and num2 is < 5100.
Both num1 and num2 contains only digits 0-9.
Both num1 and num2 does not contain any leading zero.
You must not use any built-in BigInteger library or convert the inputs to integer directly.
 */

string addStrings(const string& num1, const string& num2) {
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    int c = 0;
    string res;

    while(i >= 0 || j >= 0 || c)  {
        int a = 0;
        int b = 0;

        if(i >= 0) {
            a = num1[i] - '0'; /// Converting character to integer.
        }
        if(j >= 0) {
            b = num2[j] - '0';
        }

        int sum = a + b + c;

        int digit = sum % 10;
        c = sum / 10;

        res.push_back('0' + digit); /// Converting integer to character.

        --i;
        --j;
    }

    reverse(res.begin(), res.end());
    return res;
}