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
		//3��° ���꿡 �ش�
		arr[i] = arr[i-1] + 1;
		//2�� �������� ��� : 2��° ���꿡 �ش�
		if (i % 2 == 0)	
		{
			if (arr[i] > arr[i / 2] + 1) {
				arr[i] = arr[i / 2] + 1;
			}
		}
		//3���� �������� ��� : 1��° ���꿡 �ش�
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