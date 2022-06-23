#pragma warning(disable: 4996)	//scanf오류가 나지 않도록 하는 코드
#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	while (N--) {
		int tmp1, tmp2;
		scanf("%d, %d", &tmp1, &tmp2);
		cout << tmp1 + tmp2 << endl;
	}
}