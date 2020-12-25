/*
Perfect Squares
===============

Farmer John is playing a game with Bessie. He picks two positive
integers A and B (1 <= B <= A <= 500), and Bessie is supposed to
deduce which numbers he picked. He gave Bessie the following hint:

The numbers I chose have the property that the square of the
larger number is N (1 <= N <= 1,000) larger than the square of
the smaller number.

Being a smart cow, Bessie knows that this hint will greatly reduce the
number of possibilities for A and B. However, she is asking you to help by
writing a program to compute the exact number of solutions possible.

PROBLEM NAME: squares

INPUT FORMAT:

* Line 1: A single integer: N

SAMPLE INPUT:

15

INPUT DETAILS:

How many pairs of positive integers (A, B) satisfy A^2 = B^2 + 15?

OUTPUT FORMAT:

* Line 1: A single integer representing the number of possible
solutions

SAMPLE OUTPUT:

2

OUTPUT DETAILS:

There are two solutions: (A, B) = (4, 1) and (A, B) = (8, 7)
*/

/*
Solution:
--------------
Find the divisors of N elegantly. 
Since N = a^2 - b^2, this can be rewritten as N = (a+b) * (a-b) by factoring trick.
For each pair of divisors such that p * q = N and p >= q, solve the system:
(a + b = p; a - b = q) - > (a = (p + q)/2). 
If a is an integer (p + q is divisible by 2) then a pair (a,b) satisfying the condition exists. 
In the sample case, N = 15. One possible factorization is p = 5 and q = 3.
In this case, A can be solved to be (3 + 5)/2 = 4 and b is then 1
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N, count;
	cin >> N;
	count = 0;
	for (int i = 1; i <= sqrt(N); i++) {
		//if i and (N/i) is the divisor pair and 
		//if (i + N / i) is divisible by 2
		//Note that always i <= (N / i)
		if (N % i == 0 && (i + N / i) % 2 == 0) {
			count++;
		}
	}
	cout << count;
}