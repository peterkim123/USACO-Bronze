/*
Why Did the Cow Cross the Road
==============================

While the age-old question of why chickens cross roads has been
addressed in great depth by the scientific community, surprisingly
little has been published in the research literature on the related
subject of cow crossings. Farmer John, well-aware of the importance
of this issue, is thrilled when he is contacted by a local university
asking for his assistance in conducting a scientific study of why
cows cross roads. He eagerly volunteers to help.

As part of the study, Farmer John has been asked to document the
number of times each of his cows crosses the road. He carefully logs
data about his cows' locations, making a series of N
observations over the course of a single day. Each observation
records the ID number of a cow (an integer in the range 1...10, since
Farmer John has 10 cows), as well as which side of the road the cow
is on.

Based on the data recorded by Farmer John, please help him count the
total number of confirmed crossings. A confirmed crossing occurs when
a consecutive sightings of a cow place it on different sides of the
road.

PROBLEM NAME: crossroad

INPUT FORMAT:

The first line of input contains the number of observations, N, a
positive integer at most 100. Each of the next N lines contains one
observation, and consists of a cow ID number followed by its position
indicated by either zero or one (zero for one side of the road, one
for the other side).

OUTPUT FORMAT:

Please compute the total number of confirmed crossings.

SAMPLE INPUT:

8
3 1
3 0
6 0
2 1
4 1
3 0
4 0
3 1

SAMPLE OUTPUT:

3

In this example, cow 3 crosses twice -- she first appears on side 1,
then later appears on side 0, and then later still appears back on
side 1. Cow 4 definitely crosses once. Cows 2 and 6 do not appear to
cross.
*/

/*
Solution:
-------------
variables: n, array of cows(sets either 0 or 1 to each index that is given), sideofroad, cowID
*/

#include <iostream>
using namespace std;

int main()
{
	int n, count, arr[100], cowID, sideOfRoad;
	count = 0;
	cin >> n;
	//initializes all 11 elements to -1
	//if we leave arrays blank, then it will initialize all to 0 and it will keep increase the answer unnecessarily
	for (int i = 0; i < n; i++) {
		arr[i] = -1;
	}
	for (int i = 0; i < n; i++) {
		cin >> cowID >> sideOfRoad;
		if (arr[cowID] != -1) {
			arr[cowID] = sideOfRoad;
			//we do this because if the id is -1, that means we are iterating for the first time, because it was all intialized to -1
			//so we wouldn't do anything to the count since it's the first time the farmer is tracking the cow 
		}
		else if (arr[cowID] != sideOfRoad) {
			count++;
		}
		//else case if it isn't the first time iterating through
		//so since we initialized cowId to either 0 or 1 the first time in the first if statement
		//if it isn't what it was before, that means the cow crossed the road so we add to answer. 
	}
	cout << count;

}