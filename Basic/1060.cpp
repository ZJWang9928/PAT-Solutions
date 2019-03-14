#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int n;
int a[100005];

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	int ans = 0;
	if (a[0] > n) {
		ans = n;
	}else
	for (i = n - 1; i >= 0; i--) {
		if (a[i] <= n - i) {
			ans = n - i - 1;
			break;
		}
	}
	cout << ans << endl;
	
	return 0;
}
