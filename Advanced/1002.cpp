#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int k;
int n;
double ret[1002] = {0}, a;

int main() {
	ios::sync_with_stdio(false);
	cin >> k;
	int i, si = 0;
	for (i = 0; i < k; i++) {
		cin >> n >> a;
		// if(si < n + 1)
			// si = n + 1;
		ret[n] += a;
	}
	cin >> k;
	for (i = 0; i < k; i++) {
                cin >> n >> a;
		// if(si < n + 1)
                        // si = n + 1;
                ret[n] += a;
        }
	// cout << si << ' ';
	for (i = 0; i < 1002; i++) {
		if (ret[i])
			si++;
	}
	printf("%d", si);
	// int flag = 1;
	for (i = 1000; i >= 0; i--) {
		if (ret[i])
		// if (flag) {
			// printf("%d %.1lf", i, ret[i]);
			// flag = 0;
		// }else{
			printf(" %d %.1lf", i, ret[i]);
		// }
	}
	printf("\n");

	return 0;
}
