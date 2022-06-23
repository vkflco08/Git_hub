#include <iostream>
using namespace std;
int input[1000][2];
int arr[100]; 
int N, network;
void travel(int start) {
	for (int i = 0; i < network; i++) {
		if (input[i][0] == start && arr[input[i][1]] == 0) {
			arr[start]++;
			arr[input[i][1]]++;
			travel(input[i][1]);
		}
		if (input[i][1] == start && arr[input[i][0]] == 0) {
			arr[start]++;
			arr[input[i][0]]++;
			travel(input[i][0]);
		}
	}
}
int main() {
	cin >> N >> network;
	for (int i = 0; i <= N; i++) {
		arr[i] = 0;
	}

	for (int i = 0; i < network; i++) {
		cin >> input[i][0] >> input[i][1];
	}
	travel(1);

	int result = 0;
	for (int i = 2; i <= N; i++) {
		if (arr[i] > 0)
			result++;
	}

	cout << result;
}