#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int N, D;

struct node {
	double storage;
	double tol;
	double price;
} mooncake[1002];

bool cmp(node &n1, node &n2) {
	return n1.price > n2.price;
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> D;
	int i;
	for (i = 0; i < N; i++) {
		cin >> mooncake[i].storage;
	}
	for (i = 0; i < N; i++) {
		cin >> mooncake[i].tol;
		mooncake[i].price = 1.0 * mooncake[i].tol / mooncake[i].storage;
	}
	sort (mooncake, mooncake+N, cmp);
	double profit = 0;
	for (i = 0; i < N; i++) {
		if (mooncake[i].storage < D) {
			D -= mooncake[i].storage;
			profit += mooncake[i].tol;
		}else{
			profit += D * mooncake[i].price;
			D = 0;
		}
		if (!D)
			break;
	}
	printf("%.2lf\n", profit);
	
	return 0;
}
