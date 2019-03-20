#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int n, m, k;
int banned[10000] = {0};

int main() {
	ios::sync_with_stdio(false);
	cin >> n >> m;
	int i, j;
	int ban, posi;
	string name;
	for (i = 0; i < m; i++) {
		cin >> ban;
		banned[ban] = 1;
	}
	int cntS = 0, cntF = 0;
	int flag = 0;
	for (i = 0; i < n; i++) {
		flag = 0;
		cin >> name >> k;
		for (j = 0; j < k; j++) {
			cin >> posi;
			if (banned[posi]) {
				if (!flag) {
					// cout << name << ":";
					printf("%s:", name.c_str());
					cntS++;
					flag = 1;
				}
				// cout << " " << posi;
				printf(" %04d", posi);
				cntF++;
			}
		}
		if (flag)
			printf("\n");
	}
	// cout << cntS << ' ' << cntF << endl;
	printf("%d %d\n", cntS, cntF);
	
	return 0;
}
