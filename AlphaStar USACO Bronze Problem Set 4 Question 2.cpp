/*
Math Practice
=============

One lovely afternoon, Bessie's friend Heidi was helping Bessie
review for her upcoming math exam.

Heidi presents two integers A (0 <= A <= 45) and B (1 <= B <= 9)
to Bessie who must respond with an integer E in the range 1..62.
E is the smallest integer in that range that is strictly greater
than A and also has B as the first digit of 2 raised to the E-th
power. If there is no answer, Bessie responds with 0.

Help Bessie correctly answer all of Heidi's questions by calculating
her responses.

By way of example, consider A=1 and B=6. Bessie might generate a table
like this:
         E         2^E    First digit of 2^E
         2          4            4
         3          8            8
         4         16            1
         5         32            3
         6         64            6      <-- matches B

Thus, E=6 is the proper answer.

NOTE: The value of 2^44 does not fit in a normal 32-bit integer.

PROBLEM NAME: mathprac

INPUT FORMAT:

* Line 1: Two space-separated integers: A and B

SAMPLE INPUT:

1 6

OUTPUT FORMAT:

* Line 1: A single integer E calculated as above

SAMPLE OUTPUT:

6
*/

/*
Solution:
-------------
In this problem, 2 integers A, B are given as input
THe goal is to find the smallest integer E such that 2 ^ E > A and the first digit of 2^E is B. 
In the sample case given above, since 2^6 when E = 6 is 64, and the first digit of 64 is 6 it is the right output
This is the smallest value of E such that 2 ^ E is bigger than A (64 > 1) and the first digit of 54 is equal to B (6) so the answer is E.
This can be done with an enumeration of all possible values of E. 
Since E is in the range 1 -> 62. For checking if the first digit is B, one way is to convert the number to a string, and take the first character, and convert the character back to an integer. 
*/

//set function to convert:

#include <iostream>
#include <math.h>
using namespace std;


int firstDigitOf(int x)
{
    //remove the last digit from number
    //until one digit is left
    while (x >= 10) {
        x = x / 10;
    }
    return x;
}

int main()
{
    int A, B;
    cin >> A >> B;
    for (int e = 1; e <= 62; e++) {
        int ans = pow(2, e);
        if (ans > A && firstDigitOf(ans) == B) {
            cout << e;
            break;
        }
    }
}


