/*
Bedtime Reading, I
==================

Farmer John was performing his nightly bedtime reading duties for
Bessie. "Oh, this gives me a headache," moaned Bessie.

"But it's just simple number theory," replied FJ. "Let's go over
it again. The sigma function of a number is just the sum of the
divisors of the number. So, for a number like 12, the divisors are
1, 2, 3, 4, 6, and 12. Summing them we get 28."

"That's all there is to it?" asked Bessie.

"Yep." replied FJ. "Perhaps someone will write a program to calculate
the sigma function of an integer I (1 <= I <= 1,000,000)."

PROBLEM NAME: br1

INPUT FORMAT:

* Line 1: A single integer, I

SAMPLE INPUT:

12

OUTPUT FORMAT:

* Line 1: The sum of all of I's divisors.

SAMPLE OUTPUT:

28
*/

/*
Solution:
-------------
just set a variable sum as 0
Input n, then set up a for loop for all of the numbers before n 
then if you divide n by each iteration and if the mod is 0, then add it to the sum
*/
#include <iostream>
using namespace std;

int main()
{
	int n, sum;
	sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	cout << sum;

	return 0;
}
