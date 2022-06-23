#include <iostream>
using namespace std;

int main() {
	int input=1;
	int arr[6];
	int len;

	while (1) {
		cin >> input;
		if (input == 0)	break;
		if (input < 10) {
			cout << "yes" << endl;
			continue;
		}
		for (int i = 0; i < 6; i++) {
			arr[i] = 0;
		}
		for (int i = 0; input != 0; i++) {
			arr[i] = input % 10;
			input /= 10;
			len = i+1;
		}

		for (int i = 0; i < len / 2; i++) {
			if (arr[i] != arr[len -1 - i]) {
				cout << "no" << endl;
				break;
			}
			else if (i == len / 2 - 1) {
				cout << "yes" << endl;
			}
		}
	}
	return 0;
}