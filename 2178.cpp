#include <iostream>
using namespace std;

int arr[101][101];
int N, M;

void travel(int n, int m) {
	//check
	//cout << "---------------------------------------" << endl;

	if (m + 1 < M) {	//right
		if (arr[n][m + 1] == 1) {
			arr[n][m + 1] += arr[n][m];
			travel(n, m + 1);
		}
		if (arr[n][m] + 1 < arr[n][m + 1]) {
			arr[n][m + 1] = arr[n][m] + 1;
			travel(n, m + 1);
		}
	}
	if (n + 1 < N) {	//down
		if (arr[n + 1][m] == 1) {
			arr[n + 1][m] += arr[n][m];
			travel(n + 1, m);
		}
		if (arr[n][m] + 1 < arr[n + 1][m]) {
			arr[n + 1][m] = arr[n][m] + 1;
			travel(n + 1, m);
		}
	}
	if (0 <= m - 1) {	//left
		if (arr[n][m - 1] == 1) {
			arr[n][m - 1] += arr[n][m];
			travel(n, m - 1);
		}
		if (arr[n][m] + 1 < arr[n][m - 1]) {
			arr[n][m - 1] = arr[n][m] + 1;
			travel(n, m - 1);
		}
	}
	if (0 <= n - 1) {	//up
		if (arr[n - 1][m] == 1) {
			arr[n - 1][m] += arr[n][m];
			travel(n - 1, m);
		}
		if (arr[n][m] + 1 < arr[n - 1][m]) {
			arr[n - 1][m] = arr[n][m] + 1;
			travel(n - 1, m);
		}
	}

	//check
	/*
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "---------------------------------------" << endl;
	*/

	arr[0][0] = 1;
}

int main() {
	cin >> N >> M;

	char input[101][101];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> input[i][j];
			arr[i][j] = (int)input[i][j] - 48;
		}
	}


	travel(0, 0);
	cout << arr[N - 1][M - 1];
}


// 5 5 11111 11111 11111 11111 11111 