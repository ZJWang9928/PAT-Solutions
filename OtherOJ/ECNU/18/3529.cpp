#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int n;
int arr[22][22];

int main() {
	scanf("%d", &n);
	memset(arr, 0, sizeof(arr));
	int i, j;
	arr[1][1] = 1;
	printf("%d\n", arr[1][1]);
	for (i = 2; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			if (j != 1)
				printf(" ");
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
