#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<int> main_stack;

	int input_num;
	cin >> input_num;

	//for input arr
	int arr_index = 0;
	int* arr;
	arr = new int[input_num];

	//set input arr
	for (int i = 0; i < input_num; i++) 
		cin >> arr[i];
	
	//for result arr
	string result = "+";

	int main_loop_index = 2;
	main_stack.push(1);

	while (1) {
		if (!main_stack.empty() && main_stack.top() == arr[arr_index]) {
			main_stack.pop();

			arr_index++;

			result += '-';
			
			if (main_stack.empty() && input_num == arr_index) {		//normal shutdown
				break;
			}
			continue;
		}

		if (main_loop_index > arr[arr_index]) {
			cout << "NO" << endl;
			return 0;
		}

		main_stack.push(main_loop_index);
		main_loop_index++;
		result += '+';
	}

	for (int i = 0; i < result.length(); i++) {
		cout << result[i] << '\n';	//exceed the time limit cause 'endl'
	}

	return 0;
}