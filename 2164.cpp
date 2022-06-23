#include <iostream>
#include <cmath>
using namespace std;

/*
int* algorithm(int arr[], int &arrlen) {
	arrlen--;
	int* tmparr = new int[arrlen];
	for (int i = 0; i < arrlen; i++) {
		tmparr[i] = arr[i + 1];
	}

	int tmp = tmparr[0];
	for (int i = 0; i < arrlen - 1; i++) {
		tmparr[i] = tmparr[i+1];
	}
	tmparr[arrlen-1] = tmp;

	return tmparr;
}

int main() {
	int input;
	cin >> input;

	int* arr = new int[input];
	for (int i = 0; i < input; i++) {
		arr[i] = i + 1;
	}
	while (input > 1) {
		arr = algorithm(arr, input);
	}
	cout << arr[0];
	return 0;
}
*/
int main() {
	int input;
	int num = 1;	//2의 제곱수를 더한 수

	cin >> input;
	if (input == 1) {
		cout << 1;
		return 0;
	}

	int i = 0;
	int result = 0;
	while (1) {
		if (num + pow(2, i) >= input) {
			for (int j = num; j < input; j++) {
				result += 2;
			}
			break;
		}
		else
			num += pow(2, i);
		i++;
	}
	cout << result;
}