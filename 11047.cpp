#include <iostream>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;

	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int result = 0;
	while (K > 0) {
		for (int i = N - 1; i >= 0; i--) {
			if (arr[i] <= K) {
				K -= arr[i];
				result++;
				break;
			}
		}
	}
	cout << result;
}