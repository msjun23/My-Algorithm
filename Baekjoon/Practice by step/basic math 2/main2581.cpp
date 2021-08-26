#include <cstdio>

int main(void) {
	int M, N;
	scanf("%d %d", &M, &N);

	int sum = -1, min;
	for (int num = M; num <= N; num++) {
		bool is_prime = true;
		
		if (num == 1)
			is_prime = false;
		else {
			for (int j = 2; j * j <= num; j++) {
				if (num % j == 0) {
					is_prime = false;
					break;
				}
			}

			if (is_prime) {
				if (sum == -1) {
					sum++;
					min = num;
				}
				sum += num;
			}
		}
	}

	printf("%d\n", sum);
	if (sum != -1)
		printf("%d\n", min);

	return 0;
}