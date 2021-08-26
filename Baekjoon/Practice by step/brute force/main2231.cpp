#include <cstdio>

int main(void) {
	int N;
	scanf("%d", &N);

	int ans = 0;
	for (int i = 1; i < N; i++) {
		int temp = i + (i / 1000000) +
			(i % 1000000) / 100000 +
			(i % 100000) / 10000 +
			(i % 10000) / 1000 +
			(i % 1000) / 100 +
			(i % 100) / 10 +
			(i % 10);

		if (temp == N) {
			ans = i;
			break;
		}
	}
	
	printf("%d", ans);

	return 0;
}