#include <cstdio>

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int H, W, N;
		scanf("%d %d %d", &H, &W, &N);

		int room_idx, room_floor, room_num;
		room_idx = N / H + 1;
		room_floor = N % H;
		if (N % H == 0) {
			room_idx = N / H;
			room_floor = H;
		}

		room_num = room_floor * 100 + room_idx;
		printf("%d\n", room_num);
	}

	return 0;
}