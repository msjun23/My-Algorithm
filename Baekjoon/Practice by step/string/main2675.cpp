#include <cstdio>
#include <cstring>

int main(void) {
	int T;
	scanf("%d", &T);

	for (int t = 0; t < T; t++) {
		int R;
		char str[21];
		scanf("%d %s", &R, str);

		for (int i = 0; i < strlen(str); i++) {
			for (int j = 0; j < R; j++) {
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}

	return 0;
}