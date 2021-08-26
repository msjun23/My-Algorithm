#include <cstdio>

int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);

	int* cards = new int[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &cards[i]);
	}

	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				int temp = cards[i] + cards[j] + cards[k];
				if (temp > M)
					continue;
				else if (temp == M) {
					ans = temp;
					break;
				}
				else {
					if (temp > ans)
						ans = temp;
				}
			}

			if (ans == M)
				break;
		}

		if (ans == M)
			break;
	}

	printf("%d", ans);

	return 0;
}