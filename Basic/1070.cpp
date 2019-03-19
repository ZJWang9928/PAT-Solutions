#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;
int n, rope[10002] = {0};


int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i;
	int posi;
	for (i = 0; i < n; i++) {
		cin >> posi;
		rope[posi]++;
	}
	double length;
	for (i = 0; i < 10001; i++) {
		if (rope[i]) {
			length = i;
			break;
		}
	}
	for (i += 1; i < 10001; i++) {
		while (rope[i]--) {
			length = (length + i) / 2;
		}
	}
	cout << floor(length) << endl;
	
	return 0;
}
