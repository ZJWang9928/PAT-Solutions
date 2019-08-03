#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int n, m;
//int pie[102][102];
int res = 0;
int rowm, pie;

int main() {
	scanf("%d %d", &n, &m);
	int i, j;
	for (i = 0; i < n; i++) {
		rowm = -1;
		for (j = 0; j < m; j++) {
			scanf("%d", &pie);
			rowm = (rowm < pie) ? pie : rowm;
		}
		res += rowm;
	}
	printf("%d\n", res);

	return 0;
}
