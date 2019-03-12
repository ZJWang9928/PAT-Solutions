#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int tol;
char piv;

int main() {
	ios::sync_with_stdio(false);
	cin >> tol >> piv;
	int i = 0;
	int cnt;
	// find the max i
	for (i = 1; true; i++) {
		cnt = 2 * i * i - 1;
		if (tol < cnt) {
			break;
		}
	}
	i--;
	// cout << "i = " << i << endl;
	// int x;
	// cin >> x;
	int j, m;
	int t = i;
	int length = 2*t-1;
	int space = 0, ch = length;
	while (t >= 1) {
		for (m = 0; m < space; m++)
			cout << ' ';
		// cin >> x;
		for (m = 0; m < ch; m++)
			cout << piv;
		// cin >> x;
		// for (m = 0; m < space; m++)
			// cout << '_';
		// cin >> x;
		space++;
		t--;
		ch -= 2;
		cout << endl;
	}
	int k;
	space -= 2;
	ch += 4;
	for (k = 2; k <= i; k++) {
		for (m = 0; m < space; m++)
                        cout << ' ';
                for (m = 0; m < ch; m++)
                        cout << piv;
                // for (m = 0; m < space; m++)
                        // cout << '_';
		space--;
		ch += 2;
                cout << endl;
	}
	cout << tol - (2 * i * i - 1) << endl;
	
	return 0;
}
