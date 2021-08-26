#include <cstdio>

int main(void) {
	int N;
	int ans = 0;
	scanf("%d", &N);

	while (true) {
		if (N % 5 == 0) {
			printf("%d", N / 5 + ans);
			break;
		}
		else if (N <= 0) {
			printf("%d", -1);
			break;
		}

		N -= 3;
		ans++;
	}

	return 0;
}