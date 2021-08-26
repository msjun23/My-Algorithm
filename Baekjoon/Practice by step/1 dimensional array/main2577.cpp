#include <cstdio>

int main(void) {
	int arr[10] = { 0, };
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	int num = A * B * C;
	while (num != 0) {
		arr[num % 10]++;
		num /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}