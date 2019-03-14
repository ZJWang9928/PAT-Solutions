#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
	return (b == 0) ? a : gcd(b, a%b);
}

double n1, n2, m1, m2, k;
double a1, a2;

int main() {
	// ios::sync_with_stdio(false);
	scanf("%lf/%lf %lf/%lf %lf", &n1, &m1, &n2, &m2, &k);
	a1 = n1 / m1;
	a2 = n2 / m2;
	if (a1 > a2) {
		double t = a1;
		a1 = a2;
		a2 = t;
	}
	int flag = 1;
	double a3;
	for (double i = 1; i < k; i++) {
		a3 = i / k;
		if (a1 < a3 && a3 < a2) {
			if (gcd(i, k) == 1) {
				if (flag) {
					printf("%.0f/%.0f", i, k);
					flag = 0;
				}else{
					printf(" %.0f/%.0f", i, k);
				}
			}
		}
	}
	printf("\n");
	
	return 0;
}
