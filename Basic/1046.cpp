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

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	int i;
	int cnta = 0, cntb = 0;
	int a1, a2, b1, b2, res;
	for (i = 0; i < N; i++) {
		cin >> a1 >> a2 >> b1 >> b2;
		res = a1 + b1;
		if (a2 == res && b2 == res) {
			// cnta++;
			// cntb++;
			continue;
		}
		if (a2 == res && b2 != res) {
			cntb++;
			continue;
		}
		if (b2 == res && a2 != res) {
			cnta++;
			continue;
		}
	}
	cout << cnta << ' ' << cntb << endl;
	
	return 0;
}
