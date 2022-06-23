#include <iostream>
using namespace std;

int farm[51][51];
int width, height;

void algorithm(int h, int w) {
	farm[h][w] = 2;
	if (h + 1 < height) //up
		if (farm[h + 1][w] == 1)
			algorithm(h + 1, w);
	if (h > 0)	//down
		if (farm[h - 1][w] == 1)
			algorithm(h - 1, w);
	if (w + 1 < width)	//right
		if (farm[h][w + 1] == 1)
			algorithm(h, w + 1);
	if (w > 0)	//left
		if (farm[h][w - 1] == 1)
			algorithm(h, w - 1);
}

int main() {
	int test_case;
	int cabbage_num;

	cin >> test_case;

	//전체 무한
	while (test_case > 0) {
		cin >> width >> height >> cabbage_num;

		//수열전체를 0으로 초기화
		for (int i = 0; i < 51; i++) {	
			for (int j = 0; j < 51; j++) {
				farm[i][j] = 0;
			}
		}

		//배추 위치 입력
		int tmp1, tmp2;
		for (int i = 0; i < cabbage_num; i++) {
			cin >> tmp1 >> tmp2;
			farm[tmp2][tmp1] = 1;
		}
		
		//알고리즘
		int result = 0;
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (farm[i][j] == 1) {
					result++;
					algorithm(i, j);
				}
			}
		}
		cout << result << endl;

		test_case--;
	}
}