#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int selectEnergy(vector<int>& vect) {
	if (vect.size() == 2) {
		return 0;
	}

	int energy = 0;

	for (int i = 1; i < vect.size() - 1; i++) {
		int temp_energy = vect[i - 1] * vect[i + 1];

		vector<int> temp_vect;
		for (int j = 0; j < vect.size(); j++) {
			if (j != i) {
			temp_vect.push_back(vect[j]);
			}
		}
		temp_energy += selectEnergy(temp_vect);

		energy = max(energy, temp_energy);
	}

	return energy;
}

int main(void) {
	int N;
	scanf("%d", &N);

	vector<int> vect(N);
	for (int i = 0; i < N; i++) {
		scanf(" %d", &vect[i]);
	}

	printf("%d\n", selectEnergy(vect));
	
	return 0;
}