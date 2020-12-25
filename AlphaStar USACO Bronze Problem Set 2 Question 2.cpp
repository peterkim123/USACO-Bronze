/*
Counting Beads
==============

Bessie has spilled her collection of N(1 <= N <= 80) blue and orange
cowbeads(represented as 1s and 0s, respectively, in the human world) on
the floor.She cleans up the mess by arranging the beads into a long line.
She then counts the number of times a blue bead is next to an orange bead
and vice versa, but is not sure if she is correct.Write a program to
validate Bessie's count.

PROBLEM NAME : countbead

INPUT FORMAT :

*Line 1 : A single integer : N

* Line 2 : Line 2 contains N integers, each of which is 0 or 1

SAMPLE INPUT :

6
1 0 0 1 1 1

INPUT DETAILS :

There are six beads in total : the first bead in the line is a blue bead,
followed by two orange beads, and finally by three blue beads.

OUTPUT FORMAT :

*Line 1 : A single integer describing the number of occurrences that a
blue bead is next to an orange bead and vice versa.

SAMPLE OUTPUT :

2

OUTPUT DETAILS :

There are two times in the line that two differently colored beads are next
to each other.
*/

/*
Solution:
-------------
We set a variable called previous or prev, and current or curr, and N and count of course. 
First we input previous which we will set as the first bead in the first place. And set count as 0 
Then we iterate through N-1 because we already have the first bead and through each iteration, we input that bead as current
we compare current to previous and if it is different, we add 1 to count
Then we set previous to current to continue on the loop
*/
#include <iostream>
using namespace std;

int main()
{
	int N, count, prev, curr;
	cin >> N;
	cin >> prev;
	count = 0;
	for (int i = 1; i < N; i++) {
		cin >> curr;
		if (curr != prev) {
			count++;
		}
		prev = curr;
	}
	cout << count;
	return 0;
}