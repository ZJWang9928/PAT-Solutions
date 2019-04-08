#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int n, m;

int main() {
	// ios::sync_with_stdio(false);
	cin >> n >> m;
	int i, j;
	double g1, g2;
	double mmax, mmin;
	int cnt;
	double posi;
	for (i = 0; i < n; i++) {
		scanf("%lf", &g2);
		mmax = 0;
		mmin = m;
		g1 = 0;
		cnt = 0;
		for (j = 0; j < n - 1; j++) {
			scanf("%lf", &posi);
			if (posi >= 0 && posi <= m) {
				cnt++;
				g1 += posi;
				if (mmax < posi) {
					mmax = posi;
				}
				if (mmin > posi) {
					mmin = posi;
				}
			}
		}
		g1 = (g1 - mmax - mmin) / (cnt-2);
		printf("%d\n", (int)((g1+g2+1)/2));
	}
	
	return 0;
}
