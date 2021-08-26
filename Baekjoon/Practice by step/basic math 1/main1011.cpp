#include <cstdio>

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int x, y;
		scanf("%d %d", &x, &y);
		int moving_dist = 0;
		int x_moving_cnt = 0;
		int y_moving_cnt = 0;

		while (1) {
			moving_dist++;

			x += moving_dist;
			x_moving_cnt++;

			if (x >= y)
				break;

			y -= moving_dist;
			y_moving_cnt++;
			if (x >= y)
				break;
		}

		printf("%d\n", x_moving_cnt + y_moving_cnt);
	}
}