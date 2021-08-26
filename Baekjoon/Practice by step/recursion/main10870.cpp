#include <cstdio>

int fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
	int N;
	scanf("%d", &N);
	printf("%d", fibonacci(N));

	return 0;
}