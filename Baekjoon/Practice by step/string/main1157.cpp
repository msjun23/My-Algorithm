#include <cstdio>
#include <cstring>

int main(void) {
	char str[1000001];
	int arr[26] = { 0, };
	char ans = '?';
	int max = 0;
	scanf("%s", str);

	int length = strlen(str);
	for (int i = 0; i < length; i++) {
		if (str[i] >= 'a')
			str[i] -= 32;
		int temp = str[i] - 'A';
		arr[temp]++;

		if (arr[temp] > max) {
			ans = str[i];
			max = arr[temp];
		}
		else if (arr[temp] == max) {
			ans = '?';
		}
	}

	printf("%c", ans);

	return 0;
}