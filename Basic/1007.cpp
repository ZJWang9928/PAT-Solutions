#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

long long N;
long long cnt = 0;
bool prime[100005];

void isPrime() {
	// bool prime[10005];
	memset(prime, true, sizeof(prime));
	int i, j;
	for (i = 2; i <= sqrt(N); i++) {
		if (prime[i]) {
			for (j = 2; j*i <= N; j++) {
				prime[i*j] = false;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	isPrime();
	long long i;
	long long cnt = 0;
	long long num[100005];
	for (i = 2; i <= N; i++) {
		if (prime[i])
			num[cnt++] = i;
	}
	long long ans = 0;
	for (i = 0; i < cnt - 1; i++) {
		if (num[i+1] - num[i] == 2)
			ans++;
	}
	cout << ans << endl;
	
	return 0;
}
