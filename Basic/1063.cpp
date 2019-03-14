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
double a, b, ret, tmax = -1;

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i;
	for (i = 0; i < n; i++) {
		cin >> a >> b;
		ret = a*a + b*b;
		tmax = (tmax < ret) ? ret : tmax;
	}
	printf("%.2lf\n", sqrt(tmax));
	
	return 0;
}
