#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N;
int score[100002];

int main() {
	ios::sync_with_stdio(false);
	memset(score, 0, sizeof(score));
	cin >> N;
	int i;
	int a, b;
	int maxA, maxB = -1;
	for (i = 0; i < N; i++) {
		cin >> a >> b;
		score[a] += b;
		if (score[a] > maxB) {
			maxA = a;
			maxB = score[a];
		}
	}
	cout << maxA << ' ' << maxB << endl;
	
	
	return 0;
}
