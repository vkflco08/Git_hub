/*
ť �⺻ �Լ�

�߰� �� ����
push(element) : ť�� ���Ҹ� �߰�(�ڿ�)
pop() : ť�� �ִ� ���Ҹ� ����(�տ�)

��ȸ
front() : ť ���� �տ� �ִ� ���Ҹ� ��ȯ
back() : ť ���� �ڿ� �ִ� ���Ҹ� ��ȯ

��Ÿ
empty() : ť�� ��������� true �ƴϸ� false�� ��ȯ
size() : ť ����� ��ȯ
*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;

	queue<int> q;
	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == "push") {
			int num;
			cin >> num;
			q.push(num);
		}
		else if (input == "pop") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (input == "size") {
			cout << q.size() << endl;
		}
		else if (input == "empty") {
			if (q.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (input == "front") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else
				cout << q.front() << endl;
		}
		else if (input == "back") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else
				cout << q.back() << endl;
		}
	}

	return 0;
}