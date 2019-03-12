#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int n, posi;
long long a1, a2, a3, a5;
double a4;

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int k;
	a1 = 0;
	a2 = 0;
	a3 = 0;
	a4 = 0;
	a5 = 0;
	int flag2 = 1, fflag2 = 0;
	int cnt4 = 0;
	for (k = 0; k < n; k++) {
		cin >> posi;
		if (!(posi & 1) && !(posi % 5))
			a1 += posi;
		if (posi % 5 == 1) {
			fflag2 = 1;
			if(flag2) {
				a2 += posi;
				flag2 = 0;
			}else{
				a2 -= posi;
				flag2 = 1;
			}
		}
		if (posi % 5 == 2) {
			a3++;
		}
		if (posi % 5 == 3) {
			a4 += posi;
			cnt4++;
		}
		if (posi % 5 == 4) {
			if (a5 < posi)
				a5 = posi;
		}
	}
	if (cnt4)
		a4 /= cnt4;
        if (a1) {	   
	       	cout << a1 << ' ';
        }else{
		cout << 'N' << ' ';
	}
	if (fflag2) {
		cout << a2 << ' ';
	}else{
		cout << 'N' << ' ';
	}
	if (a3) {
		cout << a3 << ' ';
	}else{
		cout << 'N' << ' ';
	}
	if (a4) {
		// printf("%.1f ", a4);
		cout<<setiosflags(ios::fixed)<<setprecision(1);
		cout << a4 << ' ';
	}else{
		cout << 'N' << ' ';
	}
	if (a5) {
		cout << a5;
	}else{
		cout << n;
	}
	
	return 0;
}
