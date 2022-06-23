#include <iostream>
using namespace std;
//피보나치수열임
int main() {
	int arr[1001];
	arr[0] = 1;
	arr[1] = 2;
	
	int input;
	cin >> input;
	for (int i = 2; i < input; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		if (arr[i] > 10007)
			arr[i] %= 10007;
	}

	cout << arr[input - 1];
}