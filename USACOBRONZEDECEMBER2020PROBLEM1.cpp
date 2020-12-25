#include <iostream>
#include <algorithm>
using namespace std;

int deleteElement(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] == x) {
			break;
		}
	}
	if (i < n) {
		n -= 1;
		for (int j = 1; j < n; j++) {
			arr[j] = arr[j + 1];
		}
	}
	return n; 
}
int largest(int arr[])
{
	int max = arr[0];
	for (int i = 1; i < 7; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int smallest(int arr[])
{
	int temp = arr[0];
	for (int i = 0; i < 7; i++) {
		if (temp > arr[i]) {
			temp = arr[i];
		}
	}

	return temp;
}

int main()
{
	int integers[7], sumOfAll, A, B, C, AB, BC, AC;
	for (int i = 0; i < 7; i++) {
		cin >> integers[i];
	}
	int n = sizeof(integers) / sizeof(integers[0]);
	sumOfAll = largest(integers);
	n = deleteElement(integers, n, sumOfAll);

	A = smallest(integers); 
	n = deleteElement(integers, n, A);

	B = smallest(integers);
	C = sumOfAll - A - B;

	cout << A << " " << B << " " << C;
}
