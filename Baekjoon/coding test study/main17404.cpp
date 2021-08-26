#include <iostream>
#include <algorithm>

#define red 0
#define green 1
#define blue 2

#define INT_MAX 987654321

using namespace std;

int N;
int Answer;
int** color_cost;
int** dp;

void Input() {
	cin >> N;
	color_cost = new int* [N];
	dp = new int* [N];
	for (int i = 0; i < N; i++) {
		color_cost[i] = new int[3];
		dp[i] = new int[3];
		cin >> color_cost[i][red] >> color_cost[i][green] >> color_cost[i][blue];
	}

	Answer = INT_MAX;
}

void Solution() {
	// 첫 번째 집을 red, green, blue 중 어떤 생으로 칠하나?
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				dp[0][j] = color_cost[0][j];
			}
			else {
				dp[0][j] = INT_MAX;
			}
		}

		for (int j = 1; j < N; j++) {
			dp[j][red] = color_cost[j][red] + min(dp[j - 1][green], dp[j - 1][blue]);
			dp[j][green] = color_cost[j][green] + min(dp[j - 1][red], dp[j - 1][blue]);
			dp[j][blue] = color_cost[j][blue] + min(dp[j - 1][red], dp[j - 1][green]);
		}

		// 첫 번째 집과 같은 색인 경우의 cost를 최대값으로 설정
		dp[N - 1][i] = INT_MAX;
		Answer = min(Answer, min(dp[N - 1][red], min(dp[N - 1][green], dp[N - 1][blue])));
	}

	cout << Answer;
}

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	Input();
	Solution();

	return 0;
}
