#include <iostream>
using namespace std;

int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	int* sum_arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sum_arr[0] = arr[0];
	sum_arr[1] = arr[0] + arr[1];

	//index 0부터 2까지 계산
	bool two_consecutive = true;
	if (arr[0] > arr[1]) {
		sum_arr[2] = arr[0] + arr[2];

		sum_arr[2] = max(sum_arr[2], sum_arr[1]);

		two_consecutive = false;
	}
	else {
		sum_arr[2] = arr[1] + arr[2];

		sum_arr[2] = max(sum_arr[2], sum_arr[1]);

		two_consecutive = true;
	}

	//나머지 계산
	for (int i = 3; i < n; i++) {
		sum_arr[i] = max(sum_arr[i - 3] + arr[i - 1] + arr[i], sum_arr[i - 2] + arr[i]);
		sum_arr[i] = max(sum_arr[i], sum_arr[i - 1]);
		/*
		if (two_consecutive) {
			sum_arr[i] = arr[i] + sum_arr[i - 2];
			two_consecutive = false;
		}
		else {
			if (sum_arr[i - 1] >= sum_arr[i - 2]) {
				sum_arr[i] = sum_arr[i - 1] + arr[i];
				two_consecutive = true;
			}
			else if (sum_arr[i - 1] < sum_arr[i - 2]) {
				sum_arr[i] = sum_arr[i - 2] + arr[i];
				two_consecutive = false;
			}
		}
		//이 알고리즘으로 하면 두개 포도주를 안먹는 경우를 구현할 수 없음. ex) 100 400 2 1 4 200
		*/
	}

	if (sum_arr[n - 1] > sum_arr[n - 2])
		cout << sum_arr[n - 1];
	else
		cout << sum_arr[n - 2];
}