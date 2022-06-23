#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;

	int empty = 0;
	int star = (N - 1) * 2 + 1;
	while (star > 0) {
		for (int j = 0; j < empty; j++) {
			cout << " ";
		}
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		empty++;
		star -= 2;
		cout << endl;
	}
	empty -= 2;
	star += 4;

	while (star <= (N - 1) * 2 + 1) {
		for (int j = 0; j < empty; j++) {
			cout << " ";
		}
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		empty--;
		star += 2;
		cout << endl;
	}
}