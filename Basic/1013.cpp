#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int m, n;
vector<int> prime;
bool num[105000];

void isPrime() {
	memset(num, true, sizeof(num));
	long long i, j;
	for (i = 2; i <= sqrt(105000); i++) {
		if (num[i]) {
			for (j = 2; j*i <= 105000; j++) {
				num[i*j] = false;
			}
		}
	}
	for (i = 2; i <= 105000; i++) {
		if (num[i])
			prime.push_back(i);
	}
}

int main() {
	ios::sync_with_stdio(false);
	isPrime();
	cin >> m >> n;
	int cnt = 0;
	m--;
	n--;
	for (int i = m; i <= n; i++) {
		cout << prime[i];
		cnt++;
		if (cnt != 10 && i != n) {
			cout << ' ';
		}else{
			cout << endl;
			cnt = 0;
		}
	}
	
	return 0;
}
