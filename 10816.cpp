/*
#pragma warning(disable: 4996)
#include <iostream>

//이진트리를 이용하여 숫자와 개수를 저장

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
bool exist;	//이진트리에 값이 존재하는지a
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
이 문제는 그냥 이진트리로 하면 시간초과가 남. 입력 자체가 너무 크기 때문에 이진 트리를 작성하여 모두 탐색하는 것은 비효율
따라서 upperbound랑 lowerbound를 설정하면 좀 더 효율적인 탐색을 할 수 있어 오류가 나지 않음
입력이 하나 남는거는 canf를 사용할 때 %d뒤에 빈칸을 넣지 않으면 가능 
[이 문제에서 %d뒤에 평소처럼 빈칸을 넣으면 입력을 한번 더 하게 됨. 이유는 잘 모름]
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