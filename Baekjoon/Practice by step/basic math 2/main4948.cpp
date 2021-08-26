#include <cstdio>

int main(void) {
	while (true) {
		int n;
		scanf("%d", &n);
		if (n == 0)
			break;

		int cnt = 0;
		for (int num = n + 1; num <= 2 * n; num++) {
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
					cnt++;
			}
		}

		printf("%d\n", cnt);
	}

	return 0;
}