#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

string num;

int main() {
	ios::sync_with_stdio(false);
	cin >> num;
	int i;
	if (num.length() == 3) {
		for (i = 0; i < num[0] - '0'; i++) {
			cout << "B";
		}
		num[0] = num[1];
		num[1] = num[2];
	}
	if (num.length() >= 2) {
		for (i = 0; i < num[0] - '0'; i++) {
			cout << "S";
		}
		num[0] = num[1];
	}
	for (i = 1; i <= num[0] - '0'; i++) {
		cout << i;
	}
	cout << endl;
	
	return 0;
}
