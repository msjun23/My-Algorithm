#include <cstdio>
#include <algorithm>

using namespace std;

bool check(int* perm, char* arr, int k) {
	for (int i = 0; i < k; i++) {
		if (arr[i] == '<' && perm[i] > perm[i + 1]) {
			return false;
		}
		if (arr[i] == '>' && perm[i] < perm[i + 1]) {
			return false;
		}
	}

	return true;
}

int main(void) {
	int k;
	scanf("%d", &k);

	char* arr = new char[k];
	for (int i = 0; i < k; i++) {
		scanf(" %c", &arr[i]);
	}

	int* max_num = new int[k + 1];
	int* min_num = new int[k + 1];
	for (int i = 0; i <= k; i++) {
		max_num[i] = 9 - i;
		min_num[i] = i;
	}

	do {
		if (check(max_num, arr, k)) {
			break;
		}
	} while (prev_permutation(max_num, max_num + k + 1));

	do {
		if (check(min_num, arr, k)) {
			break;
		}
	} while (next_permutation(min_num, min_num + k + 1));

	for (int i = 0; i < k + 1; i++) {
		printf("%d", max_num[i]);
	}
	printf("\n");
	for (int i = 0; i < k + 1; i++) {
		printf("%d", min_num[i]);
	}
	
	return 0;
}