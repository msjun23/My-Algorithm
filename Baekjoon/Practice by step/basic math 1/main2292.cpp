#include <cstdio>

int main(void) {
	int N;
	scanf("%d", &N);

	int base = 1, i = 0;
	while (true) {
		base += (6 * i++);
		if (N <= base)
			break;
	}

	printf("%d", i);

	return 0;
}