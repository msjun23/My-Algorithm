#include <cstdio>

int main(void) {
	int N;
	scanf("%d", &N);
	int* nums = new int[N];
	for (int n = 0; n < N; n++) {
		scanf("%d", &nums[n]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (nums[i] > nums[j]) {
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", nums[i]);
	}

	return 0;
}