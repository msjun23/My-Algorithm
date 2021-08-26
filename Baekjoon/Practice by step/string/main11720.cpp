#include <cstdio>

int main(void) {
	int N, ans = 0;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		int temp;
		scanf("%1d", &temp);

		ans += temp;
	}

	printf("%d", ans);

	return 0;
}