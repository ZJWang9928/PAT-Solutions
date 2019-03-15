#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int m, n, a, b, r;

int main() {
	ios::sync_with_stdio(false);
	cin >> m >> n >> a >> b >> r;
	int i, j;
	int pixel;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> pixel;
			if (j)
				printf(" ");
			if (pixel >= a && pixel <= b) {
				printf("%03d", r);
			}else{
				printf("%03d", pixel);
			}
		}
		printf("\n");
	}
	
	return 0;
}
