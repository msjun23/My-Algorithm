#include <cstdio>

int main(void) {
	int N;
	scanf("%d", &N);

	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	int ans = 1;
	int* serial_increase = new int[N];
	int* serial_decrease = new int[N];
	serial_increase[0] = 1;
	serial_decrease[0] = 1;
	for (int i = 1; i < N; i++) {
		if (arr[i] >= arr[i - 1]) {
			serial_increase[i] = serial_increase[i - 1] + 1;
		}
		else {
			serial_increase[i] = 1;
		}

		if (arr[i] <= arr[i - 1]) {
			serial_decrease[i] = serial_decrease[i - 1] + 1;
		}
		else {
			serial_decrease[i] = 1;
		}

		int temp = serial_increase[i] > serial_decrease[i] ? serial_increase[i] : serial_decrease[i];
		ans = temp > ans ? temp : ans;
	}

	printf("%d\n", ans);

	return 0;
}