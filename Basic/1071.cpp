#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int n1, n2, b, t, k, T;

int main() {
	ios::sync_with_stdio(false);
	cin >> T >> k;
	int i;
	for (i = 0; i < k; i++) {
		cin >> n1 >> b >> t >> n2;
		if (t > T) {
			printf("Not enough tokens.  Total = %d.\n", T);
			continue;
		}
		if ((n1 < n2 && b) || (n1 > n2 && !b)) {
			T += t;
			printf("Win %d!  Total = %d.\n", t, T);
		}else{
			T -= t;
			printf("Lose %d.  Total = %d.\n", t, T);
		}
		if (!T) {
			printf("Game Over.\n");
			break;
		}
	}

	return 0;
}
