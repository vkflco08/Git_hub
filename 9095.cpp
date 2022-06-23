#include <iostream>
using namespace std;

int main() {
	int totalLoop;
	cin >> totalLoop;

	int result[12];
	result[0] = 1;
	result[1] = 2;
	result[2] = 4;
	for (int i = 3; i <= 11; i++) {
		result[i] = result[i - 1] + result[i - 2] + result[i - 3];
	}

	int tmp;
	for (int i = 0; i < totalLoop; i++) {
		cin >> tmp;
		cout << result[tmp-1] << endl;
	}
}