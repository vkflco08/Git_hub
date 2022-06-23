#include <iostream>
#include <algorithm>
using namespace std;

int arr[25][25];
int result[625];
int index = 0;
int N;

void travel(int n, int m) {
	arr[n][m] = 2;
	result[index]++;
	if (m + 1 < N) {
		if (arr[n][m + 1] == 1)	//right
			travel(n, m + 1);
	}
	if (n + 1 < N) {
		if (arr[n + 1][m] == 1)	//down
			travel(n + 1, m);
	}
	if (m - 1 >= 0) {
		if (arr[n][m - 1] == 1)	//left
			travel(n, m - 1);
	}
	if (n - 1 >= 0) {
		if (arr[n - 1][m] == 1)	//up
			travel(n - 1, m);	
	}
}

int main() {
	cin >> N;

	char tmp;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> tmp;
			arr[i][j] = (int)tmp - 48;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 1) {
				travel(i, j);
				index++;
			}
		}
	}

	sort(result, result + index);
	cout << index << endl;
	for (int i = 0; i < index; i++) {
		cout << result[i] << endl;
	}

	return 0;
}