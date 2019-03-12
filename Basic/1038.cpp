#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N, K;
int score[102];

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	int i;
	int piv;
	memset(score, 0, sizeof(score));
	for (i = 0; i < N; i++) {
		cin >> piv;
		score[piv]++;
	}
	cin >> K;
	int aim;
	for (i = 0; i < K - 1; i++) {
		cin >> aim;
		cout << score[aim] << ' ';
	}
	cin >> aim;
	cout << score[aim] << endl;

	return 0;
}
