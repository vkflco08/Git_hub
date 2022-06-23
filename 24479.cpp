#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool visited[100001] = { 0, };
int visitedValue[100001];

vector<int> graph[100001];

void dfs(int R, int value) { // R : 시작 정점
        visited[R] = true;  //시작 정점 R을 방문 했다고 표시한다.
        visitedValue[R] = value;

        for (int i = 0; i < graph[R].size(); i++) {
            int y = graph[R][i];
            if (!visited[y])
                dfs(y, value + 1);
        }
}

int main() {
    int N, M, R;
    cin >> N >> M >> R;

    int tmp1, tmp2;
    for (int i = 0; i < M; i++) {
        cin >> tmp1 >> tmp2;
        graph[tmp1].push_back(tmp2);
        graph[tmp2].push_back(tmp1);
    }

    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(R, 1);

    for (int i = 1; i <= N; i++) {
        cout << visitedValue[i] << endl;
    }
    return 0;
}