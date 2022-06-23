#include <iostream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	if (N - K < K) {
		K = N - K;
	}
	
	int result = 1;
	//Áö¼ö
	for (int i = N; i > N - K; i--) {
		result *= i;
	}
	//¹Ø
	for (int i = K; i > 0; i--) {
		result /= i;
	}

	cout << result << endl;
	return 0;
}