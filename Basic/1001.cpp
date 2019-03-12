#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

long long n;

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int cnt = 0;
	while (true) {
		if (n == 1)
			break;
		if (n & 1) {
			n = 3 * n + 1;
			n >>= 1;
			cnt++;
		}else{
			n >>= 1;
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
