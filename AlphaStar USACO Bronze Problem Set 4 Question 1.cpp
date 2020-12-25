/*
Lucky Charms
============

Bessie has a lovely charm bracelet whose length is L (4 <= L <=
32,768) mm.  Hanging from this bracelet are C (1 <= C <= 512) charms,
each at a unique integer distance from the bracelet's left side.
Charm i dangles on the end of a string whose length is S_i mm (1
<= S_i <= 25) and which is located P_i (0 <= P_i <= L) mm from the
bracelet's left side.

Margaret snatches the bracelet from Bessie and nails it (with a
zero-width nail) to a fencepost. The nail is located N mm (1 <= N
<= L-1) from the left side of the bracelet, and the bracelet itself
thus hangs left and right of the nail, with gravity pulling the
bracelet and charms straight down.

Bessie is curious: How far is each charm from the nail in the fencepost?

By way of example, consider a bracelet of length 16 mm with three
charms. The schematic diagram below shows + signs which are each
separated by 1 mm and vertical bars which each represent 1mm of an
attached string. The charms are defined to be 4, 7, and 3 mm from
the bracelet.

                        1 1 1 1 1 1 1
    0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6
    +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
            |         |             |
            |         |             |
            |         |             *
            *         |
                      |
                      |
                      *

When the charm is nailed to the fencepost with the nail at location
5, it droops like this (please ignore the left-right spread which
is shown for clarity):

Droop  Bracelet         Bracelet
dist.  location         location
  0      5         +        5    <---- nail is here
  1      4        + +       6
  2      3      | + +       7
  3      2      | + +       8              D
  4      1      | + +       9              O
  5      0      * + + |    10              W
  6                 + |    11              N
  7                 + |    12              |
  8                 + |    13              |
  9                 + |    14              V
 10                 + |    15
 11                 + *    16
 12                     |
 13                     |
 14                     *

As you can see, the first charm droops down 5 mm from the nail; the
second charm droops to 11 mm and the third charm all the way down
to 14 mm from the nail.

Calculate the charm droop distance for each charm given.

PROBLEM NAME: charms

INPUT FORMAT:

* Line 1: Three space-separated integers: L, C, and N

* Lines 2..C+1: Line i+1 describes charm i with two space-separated
        integers: S_i and P_i

SAMPLE INPUT:

16 3 5
4 4
7 9
3 16

OUTPUT FORMAT:

* Lines 1..C: Line i contains the distance from charm i to the nail

SAMPLE OUTPUT:

5
11
14
*/

/*
Solution:
-------------
We are given a horizontal string of length L, with C beads hanging from the horizontal string with vertical strings
The horizontal string is fixed with a nail to a fence at position N, causing the ends to droop down due to gravity. 
If a string was originally:
---------------
It would become:
 . 
| |
| |
|  
| 
In this example, the charm bracelet is fixed at position 5. The height 0 is definted as the point at which the charm bracelet is fixed at.
For example, the charm at position 4 becomes height 1 because position 4 is one unit away from position 5. 
Since the string hanging the charm at position 4 has a length of 4, it droops down 4 units. 
As a result, the final height of the charm is 5. 
Similarly for the charm at position 9 with string length 7 and the charm at position 16 with string length 3, the final heights are 11 (9-5+7) and 14(16-5+3), respectively. 
Read in the inputs L,C,N, and for each charm, p and s. 
Find the absolute value of the difference between the position of the nail and the position of the charm, add the string length to obtain the final height for each charm. 
*/

#include <iostream>
using namespace std;

int main()
{
    int L, C, N, s, p;
    cin >> L >> C >> N;
    for (int i = 1; i <= C; i++) {
        cin >> s >> p;
        cout << abs(p - N) + s;
    }
}