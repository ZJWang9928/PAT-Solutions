#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

// 小学数学

int N;
int a, b, toMove, ret;

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	int i;
	a = 0;
	ret = 0;
	for (i = 0; i < N; i++) {
		cin >> b;
		toMove = b - a;
		if (toMove > 0) {
			ret = ret + 6*toMove + 5;
		}else{
			ret = ret - 4*toMove + 5;
		}
		a = b;
	}
	cout << ret << endl;
	
	return 0;
}
