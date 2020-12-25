/*
Milk Pails
==========

Farmer John has received an order for exactly M units of milk (1 <=
M <= 1,000) that he needs to fill right away. Unfortunately, his
fancy milking machine has just become broken, and all he has are
three milk pails of integer sizes X, Y, and M (1 <= X < Y < M). All
three pails are initially empty. Using these three pails, he can
perform any number of the following two types of operations:

- He can fill the smallest pail (of size X) completely to the top
with X units of milk and pour it into the size-M pail, as long as
this will not cause the size-M pail to overflow.

- He can fill the medium-sized pail (of size Y) completely to the
top with Y units of milk and pour it into the size-M pail, as long
as this will not cause the size-M pail to overflow.

Although FJ realizes he may not be able to completely fill the
size-M

pail, please help him determine the maximum amount of milk he can
possibly add to this pail.

PROBLEM NAME: pails

INPUT FORMAT:

The first, and only line of input, contains X, Y, and M, separated
by spaces.

OUTPUT FORMAT:

Output the maximum amount of milk FJ can possibly add to the size-M
pail.

SAMPLE INPUT:

17 25 77

SAMPLE OUTPUT:

76

In this example, FJ fills the pail of size 17 three times and the
pail of size 25 once, accumulating a total of 76 units of milk.
*/

/*
Solution:
-------------
The goal of this problem to add exactly either X or Y units of milk at a time to the pail of size M to fill the pail as much as possible.
Read the inputs. 
For a general solution, find the maxium value of a * x + b * y such that a * x + b * y <= m.
This can be done using a nested loop checking all combinations of a and y satisfying the above constant.
or we can find the smallest possible remainder and then subtract from M.
*/

#include <iostream>
using namespace std;

int main()
{
	int x, y, m, ans;
	//initialize answer as m
	cin >> x >> y >> m;
	ans = m;
	int a = 0;
	/*
	Using this solution, for example when a = 3, (m - a *x) % y = (77 - 3 * 17) % 25 = 26 % 25 = 1
	The minimum modulus that can be obtained is 1
	*/
	while (a * x <= m) {
		ans = min(ans, (m - a * x) % y);
		a++;
	}
	cout << m - ans;

}
