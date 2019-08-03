#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int m, n, k;

int main() {
	scanf("%d %d %d", &m, &n, &k);
	int a = 1, b = 1;
	while (k--) {
		printf("%d %d\n", a, b);
		a++;
		b++;
		if (a > m)
			a = 1;
		if (b > n)
			b = 1;
	}

	return 0;
}
