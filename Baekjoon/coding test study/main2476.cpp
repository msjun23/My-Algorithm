#include <cstdio>

int main(void) {
	int N;
	scanf("%d", &N);

	int highest = 0;
	for (int i = 0; i < N; i++) {
		int score = 0;
		int temp1, temp2,temp3;
		scanf("%d %d %d", &temp1, &temp2, &temp3);

		if (temp1 == temp2) {
			if (temp2 == temp3) {
				score += 10000 + temp1 * 1000;
			}
			else {
				score += 1000 + temp1 * 100;
			}
		}
		else if (temp1 == temp3) {
			score += 1000 + temp1 * 100;
		}
		else if (temp2 == temp3) {
			score += 1000 + temp2 * 100;
		}
		else {
			int temp4 = temp2 > temp3 ? temp2 : temp3;
			score = (temp1 > temp4 ? temp1 : temp4) * 100;
		}

		if (score > highest)
			highest = score;
	}

	printf("%d\n", highest);

	return 0;
}