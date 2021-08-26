#include <cstdio>

int main(void) {
	int n;
	int idx;
	int max = 0;

	for (int i = 1; i <= 9; i++) {
		scanf("%d", &n);
		if (n > max) {
			max = n;
			idx = i;
		}
	}

	printf("%d\n%d", max, idx);

	return 0;
}