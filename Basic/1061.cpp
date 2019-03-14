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
int ans[102];
int points[102];

int main() {
	ios::sync_with_stdio(false);
	cin >> n >> m;
	int i, k;
	for (i = 0; i < m; i++) {
		cin >> points[i];
	}
	for (i = 0; i < m; i++) {
		cin >> ans[i];
	}
	int ret, posi;
	for (k = 0; k < n; k++) {
		ret = 0;
		for (i = 0; i < m; i++) {
			cin >> posi;
			if (posi == ans[i]) {
				ret += points[i];
			}
		}
		cout << ret << endl;
	}

	
	return 0;
}
