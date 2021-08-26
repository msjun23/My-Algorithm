#include <cstdio>

int main(void) {
	int N, temp;
	int max = 1;
	int min = 1000000;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &temp);

		if (temp > max)
			max = temp;
		if (temp < min)
			min = temp;
	}

	printf("%d %d", min, max);

	return 0;
}