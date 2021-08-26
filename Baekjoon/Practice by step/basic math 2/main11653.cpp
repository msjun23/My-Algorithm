#include <cstdio>

int main(void) {
	int N;
	scanf("%d", &N);

	int i = 2;
	while (N != 1) {
		if (N % i == 0) {
			N /= i;
			printf("%d\n", i);
		}
		else {
			i++;
		}
	}

	return 0;
}