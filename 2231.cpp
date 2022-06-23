#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;

	int tmp1;	//원래 자연수
	int tmp2;	//자리수를 더할 때 계속 나누는 용도
	for (int i = 1; i <= input; i++) {
		tmp1 = i;
		tmp2 = i;
		while (tmp2 > 0) {
			tmp1 += tmp2 % 10;
			tmp2 /= 10;
		}
		if (tmp1 == input) {
			cout << i << endl;
			return 0;
		}
		else if (i == input) {
			cout << "0" << endl;
			return 0;
		}
	}
}