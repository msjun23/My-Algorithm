/* Baekjoon 2206 �� �μ��� �̵��ϱ� */

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N, M;
int Answer;
int map[1000][1000];
int visited[1000][1000][2];

pair<int, int> dir[4] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

void FindRoute_BFS() {
	queue<pair<pair<int, int>, int>> que;
	que.push({ { 0, 0 }, 1 });
	visited[0][0][1] = 1;

	while (!que.empty()) {
		int row = que.front().first.first;
		int col = que.front().first.second;
		int chance = que.front().second;
		que.pop();

		if (row == N - 1 && col == M - 1) {
			Answer = visited[row][col][chance];
			return;
		}

		for (int i = 0; i < 4; i++) {
			int d_row = row + dir[i].first;
			int d_col = col + dir[i].second;

			if (0 <= d_row && d_row < N && 0 <= d_col && d_col < M) {
				// ��ó ��ġ�� ���� �ְ�, ���� ���� �� ���� ��
				if (map[d_row][d_col] == 1 && chance == 1) {
					visited[d_row][d_col][chance - 1] = visited[row][col][chance] + 1;
					que.push({ {d_row, d_col}, chance - 1 });
				}

				// �� �� �ִ� ���̰�, �湮���� �ʾ��� ��
				if (map[d_row][d_col] == 0 && visited[d_row][d_col][chance] == 0) {
					visited[d_row][d_col][chance] = visited[row][col][chance] + 1;
					que.push({ {d_row, d_col}, chance });
				}
			}
		}
	}

	Answer = -1;
	return;
}

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N >> M;
	Answer = -1;

	string input_str;
	for (int i = 0; i < N; i++) {
		cin >> input_str;
		for (int j = 0; j < M; j++) {
			map[i][j] = input_str[j] - 48;
		}
	}

	FindRoute_BFS();
	cout << Answer;

	return 0;
}
