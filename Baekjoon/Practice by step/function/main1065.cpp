#include <cstdio>
#include <string>

using namespace std;

bool func(int n) {
	string str = to_string(n);
	int common = str[1] - str[0] - '0';
	for (int i = 2; i < str.size(); i++) {
		if (str[i] - str[i - 1] - '0' != common)
			return false;
	}

	return true;
}

int main(void) {
	int N;
	int cnt = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		if (func(i))
			cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}