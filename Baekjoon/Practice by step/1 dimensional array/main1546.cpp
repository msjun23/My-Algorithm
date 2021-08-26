#include <cstdio>

int main(void) {
	int N, score;
	int max = 0;
	double avg = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &score);
		if (score > max)
			max = score;

		avg += score;
	}
	avg /= N;

	printf("%lf", avg / max * 100);

	return 0;
}