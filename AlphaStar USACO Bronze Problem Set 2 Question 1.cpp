/*
Promotion Counting
==================

Bessie the cow is helping Farmer John run the USA Cow Olympiad
(USACO), an on-line contest where participants answer challenging
questions to demonstrate their mastery of bovine trivia.

In response to a wider range of participant backgrounds, Farmer
John recently expanded the contest to include four divisions of
difficulty: bronze, silver, gold, and platinum. All new
participants start in the bronze division, and any time they score
perfectly on a contest they are promoted to the next-higher
division. It is even possible for a participant to be promoted
several times within the same contest. Farmer John keeps track of a
list of all contest participants and their current divisions, so
that he can start everyone out at the right level any time he holds
a contest.

When publishing the results from his most recent contest, Farmer
John wants to include information on the number of participants who
were promoted from bronze to silver, from silver to gold, and from
gold to platinum. However, he neglected to count promotions as they
occurred during the contest. Bessie, being the clever bovine she
is, realizes however that Farmer John can deduce the number of
promotions that occurred solely from the number of participants at
each level before and after the contest. Please help her perform
this computation!

PROBLEM NAME: promote

INPUT FORMAT:

Input consists of four lines, each containing two integers in the
range 0..1,000,000. The first line specifies the number of bronze
participants registered before and after the contest. The second
line specifies the number of silver participants before and after
the contest. The third line specifies the number of gold
participants before and after the contest. The last line specifies
the number of platinum participants before and after the contest.

OUTPUT FORMAT:

Please output three lines, each containing a single integer. The
first line should contain the number of participants who were
promoted from bronze to silver. The second line should contain the
number of participants who were promoted from silver to gold. The
last line should contain the number of participants who were
promoted from gold to platinum.

SAMPLE INPUT:

1 2
1 1
1 1
1 2

SAMPLE OUTPUT:

1
1
1

In this example, 1 participant was registered in each division
prior to the contest. At the end of the contest, 2 participants
were registered in bronze and platinum. One way this could have
happened is that 2 new participants joined during the contest; one
was promoted all the way to platinum, and the other stayed in
bronze.
*/

/*
Solution
-------------
First start with gold to platinum. To go from gold to platinum, you can't be in platinum before the competition.
And since you have to go through each successive stage to get to any other advanced one, it's just platinum after - platinum before
Use the same logic for silver to gold which is you cannot be in gold or platinum before the competition
So silver to gold is gold + platinum after - gold + platinum before
The same logic goes for bronze to silver which is silver + gold + platinum after - silver + gold + platinum before
*/
#include <iostream>
using namespace std;

int main()
{
	int bronzeBefore, bronzeAfter;
	int silverBefore, silverAfter;
	int goldBefore, goldAfter;
	int platinumBefore, platinumAfter;
	int bronzeToSilver, silverToGold, goldToPlatinum;
	cin >> bronzeBefore >> bronzeAfter;
	cin >> silverBefore >> silverAfter;
	cin >> goldBefore >> goldAfter;
	cin >> platinumBefore >> platinumAfter;

	goldToPlatinum = platinumAfter - platinumBefore;
	silverToGold = (goldAfter + platinumAfter) - (goldBefore + platinumBefore);
	bronzeToSilver = (silverAfter + goldAfter + platinumAfter) - (silverBefore + goldBefore + platinumBefore);
	cout << bronzeToSilver << endl;
	cout << silverToGold << endl;
	cout << goldToPlatinum << endl;

	return 0;

}