#include <cstdio>

int main(void) {
	int N;
	scanf("%d", &N);

	int** wires = new int*[N + 1];
	for (int i = 1; i <= N; i++) {
		wires[i] = new int[2];
		scanf("%d %d", &wires[i][0], &wires[i][1]);
	}

	for (int i = 1; i <= N; i++) {
		for (int j = i + 1; j <= N; j++) {
			if (wires[i][0] > wires[j][0]) {
				int* temp = new int[2];
				temp = wires[i];
				wires[i] = wires[j];
				wires[j] = temp;
			}
		}
	}

	int* lis = new int[N + 1];
	int lis_len = 0;
	for (int i = 1; i <= N; i++) {
		lis[i] = 1;
		for (int j = 1; j < i; j++) {
			if (lis[j] + 1 > lis[i] && wires[i][1] > wires[j][1])
				lis[i] = lis[j] + 1;
		}

		lis_len = (lis_len > lis[i]) ? lis_len : lis[i];
	}

	printf("%d\n", N - lis_len);

	return 0;
}