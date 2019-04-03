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
string ans;
int check(char x) {
	switch(x) {
		case 'A':
			return 1;
		case 'B':
			return 2;
		case 'C':
			return 3;
		case 'D':
			return 4;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < 4; j++) {
			cin >> ans;
			if (ans[2] == 'T') {
				cout << check(ans[0]);
			}
		}
	}
	cout << endl;
	
	return 0;
}
