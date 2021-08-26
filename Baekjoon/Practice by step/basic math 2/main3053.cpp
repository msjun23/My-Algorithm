#include <cstdio>

#define PI 3.1415926535897932384626433

int main(void) {
	int R;
	scanf("%d", &R);
	printf("%.6lf\n", PI * R * R);
	printf("%.6lf\n", (double)2 * R * R);

	return 0;
}