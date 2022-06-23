#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;

	int star = 0;
	for (int i = 0; i < 2 * N; i++) {
		if (i < N) {
			star++;
			for (int j = 0; j < star; j++) {
				cout << "*";
			}
			cout << endl;
		}
		else {
			star--;
			for (int j = 0; j < star; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
}