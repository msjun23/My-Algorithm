#include <cstdio>

int main(void) {
	int N;
	scanf("%d", &N);

	int** candidates = new int* [3];
	for (int i = 0; i < 3; i++) {
		candidates[i] = new int[4];
		for (int j = 0; j < 4; j++) {
			candidates[i][j] = 0;
		}
	}

	int highest = 0;
	int election = 0;
	for (int i = 0; i < N; i++) {
		int temp0, temp1, temp2;
		scanf("%d %d %d", &temp0, &temp1, &temp2);

		candidates[0][temp0]++;
		candidates[1][temp1]++;
		candidates[2][temp2]++;

		candidates[0][0] += temp0;
		candidates[1][0] += temp1;
		candidates[2][0] += temp2;
	}

	for (int j = 0; j < 3; j++) {
		if (candidates[j][0] > highest) {
			highest = candidates[j][0];
			election = j;
		}
		else if (candidates[j][0] == highest) {
			if (election == -1)
				election = j - 1;

			if (candidates[j][3] > candidates[election][3]) {
				election = j;
			}
			else if (candidates[j][3] == candidates[election][3]) {
				if (candidates[j][2] > candidates[election][2]) {
					election = j;
				}
				else if (candidates[j][2] == candidates[election][2]) {
					election = -1;
				}
			}
		}
	}

	printf("%d %d\n", election + 1, highest);

	return 0;
}