#include <cstdio>
#include <cstring>

int main(void) {
	int nums[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
	char str[16];
	scanf("%s", str);

	int ans = 0;
	for (int i = 0; i < strlen(str); i++) {
		ans += nums[str[i] - 'A'];
	}

	printf("%d", ans);

	return 0;
}