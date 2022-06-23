#include <iostream>
#include <cmath>
using namespace std;
int arr[1000001];
int main() {
	int input;
	cin >> input;
	
	arr[input];
	arr[1] = 0;
	for (int i = 2; i <= input; i++) {
		//3번째 연산에 해당
		arr[i] = arr[i-1] + 1;
		//2로 나누어질 경우 : 2번째 연산에 해당
		if (i % 2 == 0)	
		{
			if (arr[i] > arr[i / 2] + 1) {
				arr[i] = arr[i / 2] + 1;
			}
		}
		//3으로 나누어질 경우 : 1번째 연산에 해당
		if (i % 3 == 0)
		{
			if (arr[i] > arr[i / 3] + 1) {
				arr[i] = arr[i / 3] + 1;
			}
		}
	}
	
	cout << arr[input];
	return 0;
}	