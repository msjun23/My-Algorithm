#include <cstdio>


int main(void) {
	int N, X;
	scanf("%d %d", &N, &X);

	int temp;
	for (int i = 0; i < N; i++) {
		scanf("%d", &temp);

		if (temp < X) {
			printf("%d ", temp);
		}
	}

	return 0;
}