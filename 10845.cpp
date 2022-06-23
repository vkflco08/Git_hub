/*
큐 기본 함수

추가 및 삭제
push(element) : 큐에 원소를 추가(뒤에)
pop() : 큐에 있는 원소를 삭제(앞에)

조회
front() : 큐 제일 앞에 있는 원소를 반환
back() : 큐 제일 뒤에 있는 원소를 반환

기타
empty() : 큐가 비어있으면 true 아니면 false를 반환
size() : 큐 사이즈를 반환
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