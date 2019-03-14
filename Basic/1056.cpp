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

int main() {
	ios::sync_with_stdio(false);
	int i, posi, sum = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> posi;
		sum += posi*(n-1)*11;
	}
	cout << sum << endl;
	
	return 0;
}
