#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N;

int main() {
	ios::sync_with_stdio(false);
	int i;
	double sum;
	double pivot;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> pivot;
		sum += pivot * (N - i) * (i + 1);
	}
	printf("%.2lf\n", sum);
	
	return 0;
}
