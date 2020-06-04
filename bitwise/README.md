X | Y | X^Y 
--- | --- | --- 
0 | 0 | 0 
0 | 1 | 1 
1 | 0 | 1 
1 | 1 | 0 

X | Y | X&Y 
--- | --- | --- 
0 | 0 | 0 
0 | 1 | 0 
1 | 0 | 0 
1 | 1 | 1

X | Y | X&#124;Y 
--- | --- | --- 
0 | 0 | 0 
0 | 1 | 1 
1 | 0 | 1 
1 | 1 | 1  

2's complement method is widely used for representing negative numbers in binary. 
In two's-complement, there is only one zero, represented as 00000000. Negating a number (whether negative or positive) is done by inverting all the bits and then adding one to that result.

Signed to Unsigned Implicit Conversion

https://en.cppreference.com/w/cpp/language/implicit_conversion#Integral_conversions

string::npos equals -1. This value is actually the largest unsigned int value implicitly.
Largest unsigned value is represented as all 1's in binary. Taking the complement of this number and adding it to 1 would result in -1.

From string::npos reference page:

Note
Although the definition uses -1, size_type is an unsigned integer type, and the value of npos is the largest positive value it can hold, due to signed-to-unsigned implicit conversion. **This is a portable way to specify the largest value of any unsigned type (Remember that unsigned int values do not have to be 4 bytes long, that is why we need this.)**

n & (n - 1) drops the lowest set(1) bit. It's a neat little bit trick.


https://leetcode.com/problems/sum-of-two-integers/discuss/84278/A-summary%3A-how-to-use-bit-manipulation-to-solve-problems-easily-and-efficiently


__builtin_popcount --> for gcc/g++, counts the number of set bits.

For Toogling the case of letter, xor with 32 beacuse letters are in such a way that toggling the 6th LSB will change its case from lower to upper and vice versa

sliding window + bitwise = rolling hash

Set union A | B

Set intersection A & B

Set subtraction A & ~B

Set negation ALL_BITS ^ A or ~A

Set bit A |= 1 << bit

Clear bit A &= ~(1 << bit)

Test bit (A & 1 << bit) != 0

Extract last bit A&-A or A&~(A-1) or x^(x&(x-1))

Remove last bit A&(A-1)

Get all 1-bits ~0


