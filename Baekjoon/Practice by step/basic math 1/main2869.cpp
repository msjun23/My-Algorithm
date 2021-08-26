#include <cstdio>

int main(void) {
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);

	int days;
	days = (V - B) / (A - B);
	if ((V - B) % (A - B) == 0)
		printf("%d", days);
	else
		printf("%d", days + 1);

	return 0;
}