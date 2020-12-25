#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
	ifstream fin("cbarn.in");
	ofstream fout("cbarn.out");
	int n;
	fin >> n;
	int rooms[n];
	for (int i = 0; i < n; i++) {
		fin >> rooms[i];
	}
	int ans = pow(n, 2) * 100;
	//maximize the answer so that we can update it
	for (int answer = 0; answer < n; answer++) {
		int totalAnswer = 0;
		for (int distance = 0; distance < n; distance++) {
			totalAnswer += distance * rooms[(answer + distance) % n];
		}

		if (totalAnswer < ans) {
			ans = totalAnswer;
		}
	}

	cout << ans;

	return 0;
}