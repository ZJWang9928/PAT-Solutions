/* 需要注意可能空置的条件
 * 是超过观察期k的一半
 * 而不是超过D的一半
 */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N, D, cntM = 0, cntS = 0, k;
double e, u;

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> e >> D;
	int i, j;
	int cnt; 	// 低于阈值天数
	for (j = 0; j < N; j++) {
		cnt = 0;
		cin >> k;
		for (i = 0; i < k; i++) {
			cin >> u;
			if (u < e) {
				cnt++;
			}
		}
		if (cnt > k/2) {
			if (k > D) {
				cntS++;
			}else
				cntM++;
		}
	}
	printf("%.1lf%% %.1lf%%\n", 100.0*cntM/N, 100.0*cntS/N);
	
	return 0;
}
