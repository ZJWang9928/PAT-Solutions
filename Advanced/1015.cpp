#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N, D;

bool isPrime(int x) {
	int i;
	if (x == 1) {
		return false;
	}
	if (x == 2) {
		return true;
	}
	for (i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int handle(int x) {
	int tot = 0;
	while (x > 0) {
		tot *= D;
		tot += (x % D);
		x /= D;
	}
	return tot;
}

int main() {
	int rev;
	ios::sync_with_stdio(false);
	while ((cin >> N) && (N >= 0)) {
		cin >> D;
		if (!isPrime(N)) {
			cout << "No" << endl;
			continue;
		}
		rev = handle(N);
		// cout << rev << endl;
		if (!isPrime(rev)) {
			cout << "No" << endl;
			continue;
		}
		cout << "Yes" << endl;
	}
	
	return 0;
}
