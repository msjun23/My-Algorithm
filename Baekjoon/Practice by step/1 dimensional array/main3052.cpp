#include <cstdio>

int main(void) {
	int arr[42] = { 0, };
	int temp, cnt = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &temp);
		if (arr[temp % 42] == 0) {
			arr[temp % 42]++;
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}