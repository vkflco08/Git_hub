/*
#pragma warning(disable: 4996)
#include <iostream>

//����Ʈ���� �̿��Ͽ� ���ڿ� ������ ����

using namespace std;

class Node {
public:
	int value;
	int count = 0;
	Node* right = NULL;
	Node* left = NULL;
};
Node* insertNode(Node* root, int inputValue) {
	if (!root) {	//first node
		root = new Node;
		root->value = inputValue;
		root->count++;
		return root;
	}
	else {	//not first node
		if (root->value > inputValue) {
			root->right = insertNode(root->right, inputValue);
		}
		else if (root->value < inputValue) {
			root->left = insertNode(root->left, inputValue);
		}
		else if (root->value == inputValue) {
			root->count++;
		}
	}
	return root;
}
int lowerBount(int* arr, int inputValue, int size) {
	int mid, start, end;
	start = 0, end = size - 1;

	while (end > start) {
		mid = (start + end) / 2;
		if (arr[mid] >= inputValue)
			end = mid;
		else start = mid + 1;
	}
	return end;
}
int upper_binary(int* arr, int inputValue, int size) {
	int mid, start, end;
	start = 0, end = size - 1;

	while (end > start) {
		mid = (start + end) / 2;
		if (arr[mid] > inputValue)
			end = mid;
		else start = mid + 1;
	}
	return end;
}

int input[500000];
int resultIndex = 0;
bool inorder_traversal(Node* root, int left, int inputValue, int right, bool exist) {
	int mid = (left + right) / 2;
	while (left < right) {
		if (root->value < inputValue)
			inorder_traversal(root->left, left, inputValue, mid, exist);
		else if (root->value > inputValue)
			inorder_traversal(root->right, mid, inputValue, right, exist);
		if (root->value == inputValue) {
			result[resultIndex] = root->count;
			resultIndex++;
			return true;
		}
	}
	return false;
}
bool exist;	//����Ʈ���� ���� �����ϴ���a
int main() {
	Node* root = NULL;

	//create binary tree about N
	int N;
	scanf("%d ", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d ", &input[i]);
	}

	//M input
	int M;
	scanf("%d ", &M);
	result[M];
	int left = 0, right = M+1;
	for (int j = 0; j < M; j++) {
		exist = false;
		cin >> tmp;
		if (!inorder_traversal(root, left, tmp, right, exist)) {
			result[j] = 0;
			resultIndex++;
		}
	}
	for (int i = 0; i < M; i++) {
		printf("%d ", result[i]);
	}

	return 0;
}
*/
/*
�� ������ �׳� ����Ʈ���� �ϸ� �ð��ʰ��� ��. �Է� ��ü�� �ʹ� ũ�� ������ ���� Ʈ���� �ۼ��Ͽ� ��� Ž���ϴ� ���� ��ȿ��
���� upperbound�� lowerbound�� �����ϸ� �� �� ȿ������ Ž���� �� �� �־� ������ ���� ����
�Է��� �ϳ� ���°Ŵ� canf�� ����� �� %d�ڿ� ��ĭ�� ���� ������ ���� 
[�� �������� %d�ڿ� ���ó�� ��ĭ�� ������ �Է��� �ѹ� �� �ϰ� ��. ������ �� ��]
*/
#pragma warning(disable: 4996)
#include <iostream>
#include <algorithm>
using namespace std;

int inputArr[500000];
int main() {
	int N;
	scanf("%d ", &N);
	inputArr[N];
	int tmp;
	for (int i = 0; i < N; i++) {
		scanf("%d ", &tmp);
		inputArr[i] = tmp;
	}
	sort(inputArr, inputArr + N);

	int M;
	scanf("%d ", &M);
	for (int i = 0; i < M; i++) {
		int keyValue;
		scanf("%d", &keyValue);
		auto l = lower_bound(inputArr, inputArr + N, keyValue);
		auto r = upper_bound(inputArr, inputArr + N, keyValue);
		printf("%d ", r - l);
	}
	return 0;
}