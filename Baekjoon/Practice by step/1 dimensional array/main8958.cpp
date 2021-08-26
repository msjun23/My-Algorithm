#include <cstdio>
#include <cstring>

int main(void) {
	int T;
	char quiz[80];
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int score = 0, temp = 1;
		scanf("%s", quiz);

		for (int j = 0; j < strlen(quiz); j++) {
			if (quiz[j] == 'O') {
				score += temp++;
			}
			else {
				temp = 1;
			}
		}

		printf("%d\n", score);
	}

	return 0;
}