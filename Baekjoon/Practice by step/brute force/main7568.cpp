#include <cstdio>

int main(void) {
	int N;
	scanf("%d", &N);

	int** info = new int* [N];
	for (int i = 0; i < N; i++) {
		info[i] = new int[2];
		scanf("%d %d", &info[i][0], &info[i][1]);
	}

	for (int i = 0; i < N; i++) {
		int cnt = 0;

		for (int j = 0; j < N; j++) {
			if (info[j][0] > info[i][0] && info[j][1] > info[i][1])
				cnt++;
		}

		printf("%d ", cnt + 1);
	}

	return 0;
}