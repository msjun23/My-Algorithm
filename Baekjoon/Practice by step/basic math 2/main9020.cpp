#include <cstdio>

bool IsPrime(int num) {
	if (num == 1)
		return false;
	else {
		for (int i = 2; i * i <= num; i++) {
			if (num % i == 0) {
				return false;
			}
		}
	}

	return true;
}

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int n;
		scanf("%d", &n);
		int part1 = n / 2;
		int part2 = part1;

		for (int i = 0; i < part1; i++) {
			if (IsPrime(part1 - i) && IsPrime(part2 + i)) {
				part1 = part1 - i;
				part2 = part2 + i;
				break;
			}
		}

		printf("%d %d\n", part1, part2);
	}

	return 0;
}