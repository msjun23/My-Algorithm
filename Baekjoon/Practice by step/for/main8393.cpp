#include <cstdio>

int main(void) {
	int n;
	int answer = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		answer += i;
	}

	printf("%d", answer);

	return 0;
}