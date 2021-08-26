#include <cstdio>
#include <cstring>

int main(void) {
	char str[101];
	scanf("%s", &str);

	int ans = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=' || str[i + 1] == '-') {
				i++;
				ans++;
				continue;
			}
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == 'z' && str[i + 2] == '=') {
				i += 2;
				ans++;
				continue;
			}
			else if (str[i + 1] == '-') {
				i++;
				ans++;
				continue;
			}
		}
		else if (str[i] == 'l' && str[i + 1] == 'j') {
			i++;
			ans++;
			continue;
		}
		else if (str[i] == 'n' && str[i + 1] == 'j') {
			i++;
			ans++;
			continue;
		}
		else if (str[i] == 's' && str[i + 1] == '=') {
			i++;
			ans++;
			continue;
		}
		else if (str[i] == 'z' && str[i + 1] == '=') {
			i++;
			ans++;
			continue;
		}

		ans++;
	}

	printf("%d", ans);

	return 0;
}