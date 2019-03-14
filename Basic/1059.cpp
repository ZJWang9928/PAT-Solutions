#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int n, k;
bool isPrime[10005];

void prime() {
	int i, j;
	memset(isPrime, true, sizeof(isPrime));
	for (i = 2; i < sqrt(10000); i++) {
		if (isPrime[i]) {
			for (j = 2; i*j <= 10000; j++) {
				isPrime[i*j] = false;
			}
		}
	}
}

int id[10002], vis[10002] = {0};

int main() {
	ios::sync_with_stdio(false);
	int i;
	prime();
	// for (i = 2; i < 1000; i++) {
		// if (isPrime[i])
			// cout << i << ' ';
	// }
	// cout << endl;
	cin >> n;
	int iid;
	memset(id, 0, sizeof(id));
	for (i = 1; i <= n; i++) {
		cin >> iid;
		if (i == 1) {
			id[iid] = 1;
		}else if(isPrime[i]){
			id[iid] = 2;
		}else{
			id[iid] = 3;
		}
	}
	cin >> k;
	for (i = 0; i < k; i++) {
		cin >> iid;
		if (!id[iid]) {
                        printf("%04d: Are you kidding?\n", iid);
                        continue;
                }
		if(vis[iid]) {
			printf("%04d: Checked\n", iid);
			continue;
		}
		if(id[iid] == 1){
			printf("%04d: Mystery Award\n", iid);
			vis[iid] = 1;
		}else if(id[iid] == 2){
			printf("%04d: Minion\n", iid);
			vis[iid] = 1;
		}else{
			printf("%04d: Chocolate\n", iid);
			vis[iid] = 1;
		}
	}

	
	return 0;
}
