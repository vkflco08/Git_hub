#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;

	int arr[1001];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);

	int result = arr[0];
	for (int i = 1; i < N; i++) {
		arr[i] += arr[i - 1];
		result += arr[i];
	}

	//check
	/*
	for (int i = 1; i < N; i++) {
		cout << arr[i] << endl;
	}
	*/

	cout << result;

	return 0;
}