#include <iostream>
#include <string>
using namespace std;

class stack {
	int stack[10001];
	int index = -1;
public:
	void push(int x) {	// ���� X�� ���ÿ� �ִ� �����̴�.
		index++;
		stack[index] = x;
	}
	void pop() {	// ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
		if (index >= 0) {
			cout << stack[index] << endl;
			stack[index] = -1;
			index--;
		}
		else {
			cout << "-1" << endl;
		}
	}
	void size() {	// ���ÿ� ����ִ� ������ ������ ����Ѵ�.
		cout << index + 1 << endl;
	}
	void empty() {	// ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
		if (index < 0) {
			cout << "1" << endl;
		}
		else
			cout << "0" << endl;
	}
	void top() {	// ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
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