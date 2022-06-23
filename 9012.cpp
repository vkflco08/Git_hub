#include <iostream>
using namespace std;

int main() {
	int loopIndex;
	cin >> loopIndex;

	for (int i = 0; i < loopIndex; i++) {
		string input;
		cin >> input;

		if (input[0] == ')') {
			cout << "NO" << endl;
			continue;
		}
		int len = input.length();
		int leftParenthesis = 0, rightParenthesis = 0;
		for (int j = 0; j < len; j++) {
			if (input[j] == '(')
				leftParenthesis++;
			else if (input[j] == ')')
				rightParenthesis++;
			if (rightParenthesis > leftParenthesis) break;
		}
		if (leftParenthesis == rightParenthesis)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}