#pragma once

#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <unordered_map>

using std::vector;
using std::string;
using std::unordered_map;
using std::set;
using std::reverse;
using std::sort;

bool isHappy(int n);
vector<int> plusOne(vector<int>& digits);
int reverse(int x);
int countPrimes(int n);
bool isUgly(int num);
string addBinary(string a, string b);
int gcd(int a,int b); /// Greatest common divisor.
int lcm(int a,int b); /// Least common multiple.
bool checkStraightLine(vector<vector<int>>& coordinates);
bool isPerfectSquare(int num);
vector<int> sumZero(int n);
int triangleNumber(vector<int>& nums);
int countNumbersWithUniqueDigits(int n);
int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2);
vector<string> fizzBuzz(int n);
bool isPalindrome(int x);
string intToRoman(int num);
int romanToInt(string s);
bool isPowerOfThree(int n);
string multiply(string num1, string num2);
string numberToWords(int num);
vector<int> selfDividingNumbers(int left, int right);
double myPow(double x, int n);
string fractionToDecimal(int numerator, int denominator);
vector<vector<int>> generate(int numRows);
int numberOfArithmeticSlices(vector<int>& A);
vector<int> lattice(int ax, int ay, int bx, int by);
bool checkStraightLine(vector<vector<int>>& coordinates);
bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2);
int minTimeToVisitAllPoints(vector<vector<int>>& points);
int numPoints(vector<vector<int>>& points, int r);
int surfaceArea(vector<vector<int>>& grid);
vector<vector<int>> outerTrees(vector<vector<int>>& points); /// Convex Hull
double minAreaFreeRect(vector<vector<int>>& points);
vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices);
int minCostToMoveChips(vector<int>& chips);
int arrangeCoins(int n);
vector<int> numMovesStones(int a, int b, int c);