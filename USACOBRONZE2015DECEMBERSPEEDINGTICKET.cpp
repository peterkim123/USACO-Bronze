#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("speeding.in");
	ofstream fout("speeding.out");
	int n, m;
	fin >> n >> m;
	//speedLimits[K] will store the speed limit of the section of road
	//starting at mile K and ending at mile K+1.
	int speedlimits[1000];
	int currentMile = 0;

	int lengthOfSegment, speedLimit;
	for (int i = 0; i < n; i++) {
		//read in length and speed limit of segment i of the road
		fin >> lengthOfSegment >> speedLimit;
		for (int j = 0; j < lengthOfSegment; j++) {
			speedlimits[currentMile] = speedLimit;
			currentMile++;
		}
	}

	//travelSpeed[K] will store the speed that Bessie traveled at for 
	//the section of road starting at mile K and ending at mile K+1.
	int travelSpeed[100];
	currentMile = 0;
	for (int i = 0; i < m; i++) {
		fin >> lengthOfSegment >> speedLimit;
		for (int j = 0; j < lengthOfSegment; j++) {
			travelSpeed[currentMile] = speedLimit;
			currentMile++;
		}
	}

	//maxOver will store the maximum amount over the speed limit that Bessie traveled.
	int maxOver = 0;
	for (int i = 0; i < 100; i++) {
		//compute the amount over the speed limit Bessie traveled
		int amountExceeded = travelSpeed[i] - speedlimits[i];
		//update maxOver if we have exceeded it
		if (amountExceeded > maxOver) {
			maxOver = amountExceeded;
		}
	}

	fout << maxOver;

	return 0;
}
