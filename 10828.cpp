#include <iostream>
#include <string>
using namespace std;

class stack {
	int stack[10001];
	int index = -1;
public:
	void push(int x) {	// 정수 X를 스택에 넣는 연산이다.
		index++;
		stack[index] = x;
	}
	void pop() {	// 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
		if (index >= 0) {
			cout << stack[index] << endl;
			stack[index] = -1;
			index--;
		}
		else {
			cout << "-1" << endl;
		}
	}
	void size() {	// 스택에 들어있는 정수의 개수를 출력한다.
		cout << index + 1 << endl;
	}
	void empty() {	// 스택이 비어있으면 1, 아니면 0을 출력한다.
		if (index < 0) {
			cout << "1" << endl;
		}
		else
			cout << "0" << endl;
	}
	void top() {	// 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
		if (index >= 0) {
			cout << stack[index] << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
};

int main() {
	int N;
	cin >> N;

	stack stack;
	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == "push") {
			int num;
			cin >> num;
			stack.push(num);
		}
		else if (input == "pop") {
			stack.pop();
		}
		else if (input == "size") {
			stack.size();
		}
		else if (input == "empty") {
			stack.empty();
		}
		else if (input == "top") {
			stack.top();
		}
	}
}