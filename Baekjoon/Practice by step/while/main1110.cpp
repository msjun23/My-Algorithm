#include <cstdio>

int main(void) {
	int N, answer = 0;
	scanf("%d", &N);

	int temp = N;
	while (true) {
		int a = temp / 10;
		int b = temp % 10;
		temp = (b * 10) + ((a + b) % 10);

		answer++;

		if (temp == N)
			break;
	}
	
	printf("%d", answer);

	return 0;
}