#include <cstdio>

int main(void) {
	int M, N;
	scanf("%d %d", &M, &N);

	for (int num = M; num <= N; num++) {
		bool is_prime = true;

		if (num == 1)
			is_prime = false;
		else {
			for (int i = 2; i * i <= num; i++) {
				if (num % i == 0) {
					is_prime = false;
					break;
				}
			}

			if (is_prime)
				printf("%d\n", num);
		}
	}

	return 0;
}