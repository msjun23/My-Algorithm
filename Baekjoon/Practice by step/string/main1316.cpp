#include <cstdio>
#include <cstring>

bool GroupWord(char* str) {
	int arr[26] = { 0, };

	for (int i = 0; i < strlen(str); i++) {
		if (arr[str[i] - 'a'] == 1) {
			if (str[i - 1] != str[i])
				return false;
		}

		arr[str[i] - 'a'] = 1;
	}

	return true;
}

int main(void) {
	int N, ans = 0;
	scanf("%d", &N);

	for (int n = 0; n < N; n++) {
		char str[101];
		scanf("%s", str);

		if (GroupWord(str))
			ans++;
	}

	printf("%d", ans);

	return 0;
}