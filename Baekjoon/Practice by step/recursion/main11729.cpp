#include <cstdio>

void MovingHanoi(int n, int x, int y) {
	if (n > 1)
		MovingHanoi(n - 1, x, 6 - x - y);

	printf("%d %d\n", x, y);

	if (n > 1)
		MovingHanoi(n - 1, 6 - x - y, y);
}

int main(void) {
	int N;
	scanf("%d", &N);

	printf("%d\n", (1 << N) - 1);
	MovingHanoi(N, 1, 3);

	return 0;
}