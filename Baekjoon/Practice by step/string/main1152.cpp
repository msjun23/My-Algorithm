#include <iostream>
#include <string>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string str;
	getline(cin, str);

	int ans = 0;
	for (int i = 1; i < str.size(); i++) {
		if (str[i] == ' ') {
			ans++;
		}
	}
	if (str[str.size() - 1] != ' ') {
		ans++;
	}

	cout << ans;

	return 0;
}