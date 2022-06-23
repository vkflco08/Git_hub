#pragma warning(disable: 4996)	//scanf오류가 나지 않도록 하는 코드
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];
int main() {
	int N;
	scanf("%d", &N);
	arr[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + N);
	
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int keyValue;
		scanf("%d", &keyValue);
		auto u = upper_bound(arr, arr + N, keyValue);
		auto l = lower_bound(arr, arr + N, keyValue);
		if (u - l <= 0)
			printf("0\n");
		else
			printf("1\n");
	}
}
