#include <iostream>
using namespace std;
int main() {
	int arr[1007];
	arr[0] = 1;

	for (int i = 1; i < 1000; i++) {
		if (i % 2 == 1)
			arr[i] = arr[i - 1] * 2 + 1;
		else
			arr[i] = arr[i - 1] * 2 - 1;
		if (arr[i] > 10007)
			arr[i] %= 10007;
	}

	int input;
	cin >> input;
	cout << arr[input-1];
}