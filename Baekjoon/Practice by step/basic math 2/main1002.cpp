#include <cstdio>
#include <cmath>

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int x1, y1, r1, x2, y2, r2;
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		double r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		if (x1 == x2 && y1 == y2 && r1 == r2)
			printf("%d\n", -1);
		else if (r > r1 + r2 || (x1 == x2 && y1 == y2 && r1 != r2) || r < abs(r1 - r2))
			printf("%d\n", 0);
		else if (r == r1 + r2 || abs(r1 - r2) == r)
			printf("%d\n", 1);
		else
			printf("%d\n", 2);
	}

	return 0;
}