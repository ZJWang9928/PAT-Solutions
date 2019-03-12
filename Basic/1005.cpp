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
long long a[10005], ret[50005], vis[10005];
long long mmin = 1000000000, mmax = -1;

int main() {
	ios::sync_with_stdio(false);
	cin >> k;
	long long i;
	memset(ret, 0, sizeof(ret));
	memset(vis, 0, sizeof(vis));
	for (i = 0; i < k; i++) {
		cin >> a[i];
		vis[a[i]] = 1;
		if (a[i] > mmax) mmax = a[i];
		if (a[i] < mmin) mmin = a[i];
		long long pivot = a[i];
		while (pivot != 1){
                	if (pivot & 1) {
                      		pivot = pivot * 3 + 1;
	                        pivot >>= 1;
                        	ret[pivot] = 1;
                	}else{
                       		pivot >>= 1;
	                        ret[pivot] = 1;
        	        }
		}
	}
	long long cnt = 0;
	for (i = mmax; i >= mmin; i--) {
		if (!ret[i] && vis[i]) {
			if (cnt)
				cout << ' ';
			cout << i;
			cnt++;
		} 
	}
	cout << endl;
	
	return 0;
}
