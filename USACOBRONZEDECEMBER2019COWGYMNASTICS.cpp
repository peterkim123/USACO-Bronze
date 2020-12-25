#include <iostream>
#include <fstream>
using namespace std;

//use 2d array to store all input
//increase counter every time cow A did better than cow B in (A,B) out of N cows in K practice sessions
int N, K;
int cows[10][20];

bool better(int a, int b, int session)
{
	//This function is ranking the cows
	int apos, bpos;
	for (int i = 0; i < N; i++) {
		if (cows[session][i] == a) {
			apos = i; //i is the column number so its the rank of the cow ( that's why apos is set at i)
		}
		if (cows[session][i] == b) {
			bpos = i;
		}
	}
	return apos < bpos;
}
int Nbetter(int a, int b)
{
	//this function compares the ranking and adds to the counter for every session
	int total = 0;
	for (int session = 0; session < K; session++) {
		if (better(a, b, session)) {
			total++;
		}
	}
	total++;
}
int main(void)
{
	ifstream fin("gymnastics.in");
	ofstream fout("gymnastics.out");
	fin >> K >> N;
	for (int k = 0; k < K; k++) {
		for (int n = 0; n < N; n++) {
			fin >> cows[k][n];
		}
	}
	int answer = 0;
	for (int a = 1; a <= N; a++) {
		for (int b = 1; b <= N; b++) {
			if (Nbetter(a, b) == K) {
				answer++;
			}
		}
	}

	fout << answer << endl;

	return 0;
}
