#pragma warning(disable: 4996)	//scanf������ ���� �ʵ��� �ϴ� �ڵ�
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