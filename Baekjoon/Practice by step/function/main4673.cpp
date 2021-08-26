#include <cstdio>

int d(int num) {
	int n_1000, n_100, n_10, n_1;

	n_1000 = num / 1000;
	n_100 = (num % 1000) / 100;
	n_10 = (num % 100) / 10;
	n_1 = num % 10;

	return num + n_1000 + n_100 + n_10 + n_1;
}

int main(void) {
	int nums[10036] = { 0, };

	for (int i = 1; i <= 10000; i++) {
		nums[d(i)] = 1;
	}

	for (int i = 1; i < 10001; i++) {
		if (nums[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}