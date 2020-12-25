#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("square.in");
	ofstream fout("square.out");
	int xLL1, yLL1, xUR1, yUR1;
	int xLL2, yLL2, xUR2, yUR2;

	fin >> xLL1 >> yLL1 >> xUR1 >> yUR1;
	fin >> xLL2 >> yLL2 >> xUR2 >> yUR2;

	int minX;
	minX = min(xLL1, xLL2);

	int maxX;
	maxX = max(xUR1, xUR2);

	int minY;
	minY = min(yLL1, yLL2);

	int maxY;
	maxY = max(yUR1, yUR2);

	int width, height, sideLength;
	width = maxX - minX;
	height = maxY - minY;

	if (width > height) {
		sideLength = width;
	}
	else {
		sideLength = height;
	}

	int area = sideLength * sideLength;

	fout << area;
}