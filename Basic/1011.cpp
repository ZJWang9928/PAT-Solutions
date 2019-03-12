#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

long long a, b, c;

int main() {
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cout << "Case #" << i << ": ";
		cin >> a >> b >> c;
		// cout << a << endl << b << endl << c << endl << a+b << endl;
		// if (a > c || b > c) {
			// cout << "true" << endl;
			// continue;
		// }
		if (a + b > c) {
			cout << "true" << endl;
			continue;
		}
		cout << "false" << endl;
	}
	
	return 0;
}
