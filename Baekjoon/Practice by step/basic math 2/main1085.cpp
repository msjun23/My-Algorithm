#include <cstdio>

int main(void) {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	printf("%d", (w - x < h - y ? w - x : h - y) < (x < y ? x : y) ? (w - x < h - y ? w - x : h - y) : (x < y ? x : y));

	return 0;
}