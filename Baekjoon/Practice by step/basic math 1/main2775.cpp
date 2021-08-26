#include <cstdio>

int GetMembers(int k, int n) {
	int ans = 0;

	if (k == 0) {
		return n;
	}
	else {
		for (int i = 1; i <= n; i++) {
			ans += GetMembers(k - 1, i);
		}
	}

	return ans;
}

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int k, n;
		scanf("%d %d", &k, &n);

		int ans = GetMembers(k, n);
		printf("%d\n", ans);
	}

	return 0;
}