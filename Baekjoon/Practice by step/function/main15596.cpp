#include <cstdio>

int main(void) {
	int C;
	scanf("%d", &C);

	for (int c = 0; c < C; c++) {
		int N;
		scanf("%d", &N);

		int* scores = new int[N];
		int avg = 0;
		for (int i = 0; i < N; i++) {
			scanf("%d", &scores[i]);
			avg += scores[i];
		}
		avg /= N;

		int cnt = 0;
		for (int i = 0; i < N; i++) {
			if (scores[i] > avg)
				cnt++;
		}

		printf("%.3lf%%\n", ((double)cnt / N) * 100);
	}

	return 0;
}