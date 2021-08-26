#include <cstdio>

int main(void) {
	int A, B, A_inv, B_inv;
	scanf("%d %d", &A, &B);

	A_inv = ((A % 10) * 100) + (((A % 100) / 10) * 10) + (A / 100);
	B_inv = ((B % 10) * 100) + (((B % 100) / 10) * 10) + (B / 100);
	printf("%d", A_inv > B_inv ? A_inv : B_inv);

	return 0;
}