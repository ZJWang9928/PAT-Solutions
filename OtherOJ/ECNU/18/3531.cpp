#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int res[105] = {0};
int n, k;
int a;

int main() {
	scanf("%d %d", &n, &k);
	int i;
	for (i = 0; i < k; i++) {
		scanf("%d", &a);
		res[a+2] = -1;
	}
	res[2] = 1;
	for (i = 3; i <= n+2; i++) {
		if (res[i] == -1)
			continue;
		if (res[i-1] != -1)
			res[i] += res[i-1];
		if (res[i-2] != -1)
			res[i] += res[i-2];
		if (res[i-3] != -1)
			res[i] += res[i-3];
	}
	if (res[n+2] != -1)
		printf("%d\n", res[n+2]);
	//else if (res[n+1] != -1)
		//printf("%d\n", res[n+1]+1);
	//else if (res[n] != -1)
		//printf("%d\n", res[n]+1);
	//else if (res[n-1] != -1)
		//printf("%d\n", res[n-1]+1);
	else
		printf("0\n");

	return 0;
}
