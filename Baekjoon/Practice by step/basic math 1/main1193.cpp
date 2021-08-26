#include <cstdio>

int main(void) {
	int X;
	scanf("%d", &X);

	int row, column;
	int n = 0, i = 1;
	while (true) {
		n += i;

		if (X <= n) {
			int temp = n - X;

			if (i % 2 == 0) {
				row = i - temp;
				column = temp + 1;
			}
			else {
				row = temp + 1;
				column = i - temp;
			}
			break;
		}

		i++;
	}

	printf("%d/%d", row, column);

	return 0;
}