#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("paint.in");
	ofstream fout("paint.out");
	int a, b, c, d;
	fin >> a >> b >> c >> d;
	if (c < a) {
		if (d >= b) {
			cout << (d - c);
		}
		else if (d >= a && d < b) {
			cout << (b - c); 
		}
		else if (d <= a) {
			cout << (b - a) + (d - c);
		}
	}
	else {
		if (c < b) {
			if (d <= b) {
				cout << (b - a);
			}
			else {
				cout << (d-a);
			}
		}
	}
	
	return 0;
}