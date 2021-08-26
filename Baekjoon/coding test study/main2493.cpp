#include <cstdio>
#include <stack>

using namespace std;

class tower {
public:
	int height;
	int receive = 0;
};

int main(void) {
	int N;
	scanf("%d", &N);

	tower* towers = new tower[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &towers[i].height);
	}

	stack<tower*> stk;
	stk.push(&towers[N - 1]);
	for (int i = N - 2; i >= 0; i--) {
		while (!stk.empty() && towers[i].height > (*stk.top()).height) {
			(*stk.top()).receive = i + 1;
			stk.pop();
		}

		stk.push(&towers[i]);
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", towers[i].receive);
	}
	
	return 0;
}