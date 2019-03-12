#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int num[12];

int main() {
	ios::sync_with_stdio(false);
	memset(num, 0, sizeof(num));
	int posi;
	for (posi = 0; posi < 10; posi++) {
		cin >> num[posi];
	}
	int i;
	int isZero = 1;
	for (i = 1; i < 10; i++) {
		if (num[i]) {
			cout << i;
			num[i]--;
			isZero = 0;
			break;
		}
	}
	if (isZero) {
		cout << 0 << endl;
	}
	for (i = 0; i < 10; i++) {
		int j;
		if (num[i]){
			for (j = 0; j < num[i]; j++) {
				cout << i;
			}
		}
	}
	cout << endl;
	
	return 0;
}
