#include <cstdio>

int main(void) {
	int N, cnt = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int temp;
		scanf("%d", &temp);

		bool is_prime = true;
		if (temp == 1)
			is_prime = false;
		else {
			for (int j = 2; j * j <= temp; j++) {
				if (temp % j == 0) {
					is_prime = false;
					break;
				}
			}
		}

		if (is_prime)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}