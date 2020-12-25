/*
Another Cow Number Game
=======================

The cows are playing a silly number game again. Bessie is tired of
losing and wants you to help her cheat. In this game, a cow supplies
a number N (1 <= N <= 1,000,000). This is move 0. If N is odd, then
the number N is multiplied by 3 and incremented by 1. If N is even,
the number N is divided by 2. Each time the number is multiplied
or divided, the score increases by one point. The game ends -- and
the score is finalized -- when N becomes 1. If N is initially 1,
the score is 0.

Here's an example with N starting at 5:

        N     Next Value    Comment    Score
        5        16          3*5+1       1
       16         8           16/2       2
        8         4            8/2       3
        4         2            4/2       4
        2         1            2/2       5

The final score is 5.

PROBLEM NAME: acng

INPUT FORMAT:

* Line 1: A single integer, N

SAMPLE INPUT:

112


OUTPUT FORMAT:

* Line 1: A single integer that is the score for this game when
        starting at N

SAMPLE OUTPUT:

20
*/

/*
Solution:
-------------
We want the number of steps 
So set the steps to 0,
use a while loop so that while N is not equal to 1, then if n is even then divide, else multiply and add 1
then add step
then print steps
*/
#include <iostream>
using namespace std;

int main()
{
    int N, count;
    cin >> N;
    count = 0;
    while (N != 1) {
        if (N % 2 == 1) {
            N = N * 3 + 1;
        }
        else {
            N /= 2;
        }
        count++;
    }
    cout << count;
}
