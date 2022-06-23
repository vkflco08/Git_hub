#pragma warning(disable: 4996)
#include <iostream>
using namespace std;
int A[1000];

int main() {
	int input;
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf("%d", &A[i]);
	}
	
	int* arr = new int[input];
	for (int i = 0; i < input; i++) {
		arr[i] = 1;
		for (int j = 0; j < i; j++) {
			if (A[j] < A[i] && arr[i] <= arr[j]) {
				arr[i] = arr[j] + 1;
			}
		}
	}
	int high = arr[0];
	for (int i = 0; i < input; i++) 
		if (arr[i] > high)
			high = arr[i];
	
	cout << high;
	return 0;
}