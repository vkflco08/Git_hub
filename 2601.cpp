#include <iostream>
using namespace std;

int greatest(int a, int b) {
	int result = 1;
	for (int i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0)
			result = i;
	}
	return result;
}
int main() {
	int a, b;
	cin >> a >> b;

	int g = greatest(a, b);
	cout << g << endl;
	cout << a * b / g << endl;
}