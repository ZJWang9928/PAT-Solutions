#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N;
int score[1002];

int main() {
	// ios::sync_with_stdio(false);
	int team, player, point;
	memset(score, 0, sizeof(score));
	int i;
	int tmax = -1, maxi = 0;
	cin >> N;
	for (i = 0; i < N; i++) {
		scanf("%d-%d %d", &team, &player, &point);
		score[team] += point;
		if (score[team] > tmax) {
			tmax = score[team];
			maxi = team;
		}
	}
	cout << maxi << ' ' << tmax << endl;
	
	return 0;
}
