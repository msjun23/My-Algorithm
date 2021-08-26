#include <cstdio>

void PrintStar(char** arr, int n, int x, int y) {
	if (n == 1) {
		arr[y][x] = '*';
		return;
	}

	PrintStar(arr, n / 3, x, y);
	PrintStar(arr, n / 3, x + n / 3, y);
	PrintStar(arr, n / 3, x + n / 3 * 2, y);

	PrintStar(arr, n / 3, x, y + n / 3);
	PrintStar(arr, n / 3, x + n / 3 * 2, y + n / 3);

	PrintStar(arr, n / 3, x, y + n / 3 * 2);
	PrintStar(arr, n / 3, x + n / 3, y + n / 3 * 2);
	PrintStar(arr, n / 3, x + n / 3 * 2, y + n / 3 * 2);
}

int main(void) {
	int N;
	scanf("%d", &N);

	char** arr = new char* [N];
	for (int i = 0; i < N; i++) {
		arr[i] = new char[N];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = ' ';
		}
	}

	PrintStar(arr, N, 0, 0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < N; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}