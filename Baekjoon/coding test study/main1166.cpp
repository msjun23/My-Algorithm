/* Baekjoon 1166 ���� */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void) {
	long long int N, L, W, H;
	scanf(" %lld %lld %lld %lld", &N, &L, &W, &H);
	double max_len = (((L < W) ? L : W) < H) ? ((L < W) ? L : W) : H;	// L, W, H �� ���� ���� �� ����

	double answer = 0;
	for (int i = 0; i < 10000; i++) {
		long double pivot = (answer + max_len) / 2;

		if ((long long)(L / pivot) * (long long)(W / pivot) * (long long)(H / pivot) >= N) {
			answer = pivot;
		}
		else {
			max_len = pivot;
		}
	}

	printf("%.10lf\n", answer);

	return 0;
}