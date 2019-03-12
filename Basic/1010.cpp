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

int main() {
	ios::sync_with_stdio(false);
	int flag = 1;
	while (scanf("%d %d", &m, &n) != EOF) {
		if (n > 0) {
			if (flag) {
				printf("%d %d", m*n, n-1);
				flag = 0;
			}else{
				printf(" %d %d", m*n, n-1);
			}
		}
	}
	if (flag) {
		printf("0 0");
	}
	printf("\n");

	return 0;
}
