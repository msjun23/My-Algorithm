#include <cstdio>
#include <cstring>

int main(void) {
	char str[101];
	int alphabet[26];
	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	}

	scanf("%s", &str);
	for (int i = 0; i < strlen(str); i++) {
		if (alphabet[str[i] - 'a'] == -1) {
			alphabet[str[i] - 'a'] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}

	return 0;
}