/*
입력의 전체 합에서 100을 제거하면 일곱난쟁이가 아닌 두명의 키의 합이 나온다.
반복문 두개로 해당 난쟁이를 찾으면 끝
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int input[9];
	for (int i = 0; i < 9; i++) {
		cin >> input[i];
	}

	sort(input, input + 9);
	
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		sum += input[i];
	}
	sum -= 100;


	int first, second;	//
	for (int i = 0; i < 9 - 1; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (input[i] + input[j] == sum) {
				first = i;
				second = j;
			}
		}
	}
	
	for (int i = 0; i < 9; i++) {
		if (i != first && i != second)
			cout << input[i] << endl;
	}
}