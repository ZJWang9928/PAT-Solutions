#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int n, cnt = 0, posi;
int ret[10005];

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i;
	int tmp;
	for (i = 0; i < n; i++) {
		cin >> posi;
		tmp = 0;
		while(posi>0) {
			tmp += posi % 10;
			posi /= 10;
		}
		if (!ret[tmp]) {
			ret[tmp] = 1;
			cnt++;
		}
	}
	cout << cnt << endl;
	int flag = 1;
	for (i = 0; i < 10005; i++) {
		if (ret[i]) {
			if (flag) {
				cout << i;
				flag = 0;
			}else{
				cout << ' ' << i;
			}
		}
	}
	cout << endl;
	
	return 0;
}
