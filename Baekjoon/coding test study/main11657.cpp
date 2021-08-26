#include <iostream>
#include <vector>

#define INT_MAX 2147483647

using namespace std;

int N, M;
long long* nodes;
vector<pair<pair<int, int>, int>> edges;

void Input() {
	cin >> N >> M;
	nodes = new long long[N + 1];
	for (int i = 1; i <= N; i++) {
		nodes[i] = INT_MAX;
	}
	for (int i = 0; i < M; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;

		edges.push_back(make_pair(make_pair(from, to), cost));
	}
}

void Solution() {
	nodes[1] = 0;

	// Bellman-Ford
	for (int i = 1; i <= N - 1; i++) {
		for (int i = 0; i < edges.size(); i++) {
			int from = edges[i].first.first;
			int to = edges[i].first.second;
			int cost = edges[i].second;

			if (nodes[from] == INT_MAX) continue;

			if (nodes[from] + cost < nodes[to]) {
				nodes[to] = nodes[from] + cost;
			}
		}
	}

	// Infinite loop
	for (int i = 0; i < edges.size(); i++) {
		int from = edges[i].first.first;
		int to = edges[i].first.second;
		int cost = edges[i].second;

		if (nodes[from] == INT_MAX) continue;

		if (nodes[from] + cost < nodes[to]) {
			cout << -1 << "\n";
			return;
		}
	}

	// Print answer
	for (int i = 2; i <= N; i++) {
		if (nodes[i] == INT_MAX) {
			cout << -1 << "\n";
		}
		else {
			cout << nodes[i] << "\n";
		}
	}

	return;
}

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	Input();
	Solution();

	return 0;
}